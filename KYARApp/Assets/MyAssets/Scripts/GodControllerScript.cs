using System;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Collections;


namespace UnityEngine.XR.iOS
{
    public class GodControllerScript : MonoBehaviour
    {

        private enum FloorDetectionStatus
        {
            Initializing,
            Finding,
            Found,
            GameStarting,
            GameStarted
        }

        // GameObject referenced by God scene
        public Text debugMessage;
        public Text debugPositionText;
        public Text mainMessage;
        public GameObject debugCanvasObject;
        public GameObject imageMask;
        public GameObject playerPrefab;



        // Game management
        private float MAX_TIME = 5.9f;
        private bool _debug = true;
        private float _timeCount;
        public float _targetDistance = 0.1f;
        public float _baseHight = 0.1f;
        public float _baseDistance = 5f;
        private Vector3 _baseVector;
        private Vector3 _basePoint;
        private FloorDetectionStatus _floorDetectionStatus;
        private GameObject[] _playerObj;
        private PositionTracker _positionTracker;

        // Use this for initialization
        void Start()
        {

            if (_debug)
            {
                Debug.Log("Debug mode on");
                debugCanvasObject.gameObject.SetActive(true);
                debugMessage.text = "Initializing";
            }
            else
            {
                debugCanvasObject.gameObject.SetActive(false);
            }

            // Initializing
            _floorDetectionStatus = FloorDetectionStatus.Initializing;
            imageMask.gameObject.SetActive(false);
            _baseVector = new Vector3(0, _baseHight, -(_baseDistance / 2f) * (_targetDistance / _baseDistance));

            // Added hook event for AR
            UnityARSessionNativeInterface.ARAnchorAddedEvent += AddAnchor;

            // Mode Changed to Finding state
            _floorDetectionStatus = FloorDetectionStatus.Finding;
            Debug.Log("Finding Floor");
            if (_debug)
            {
                debugMessage.text = "Finding Floor";
            }


        }
        // Update is called once per frame
        void Update()
        {
            if (_debug)
            {
                debugPositionText.text = "Current Position \n" +
                  "x = " + Camera.main.transform.position.x.ToString() + "\n" +
                  "y = " + Camera.main.transform.position.y.ToString() + "\n" +
                  "z = " + Camera.main.transform.position.z.ToString() + "\n" +
                  "base = " + string.Format("x:{0:0.######} y:{1:0.######} z:{2:0.######}", _basePoint.x, _basePoint.y, _basePoint.z);
            }
            if (_floorDetectionStatus == FloorDetectionStatus.GameStarting)
            {
                _timeCount -= Time.deltaTime;
                mainMessage.text = ((int)_timeCount).ToString();
                if (_timeCount <= 1 && _timeCount > 0)
                {
                    mainMessage.text = "Start!";
                    imageMask.gameObject.SetActive(false);

                }
                else if (_timeCount <= 0)
                {
                    mainMessage.text = "";
                    mainMessage.gameObject.SetActive(false);
                    _floorDetectionStatus = FloorDetectionStatus.GameStarted;
                }
            }
            else if (_floorDetectionStatus == FloorDetectionStatus.GameStarted)
            {

                // Get base position 


                // Update position
                for (int i = 0; i < 2; i++)
                {
                    _playerObj[i].transform.position = GetPlayerPositionInGod(_positionTracker.PlayerPosition(i, i));
                    _playerObj[i].transform.rotation = Quaternion.Euler(_positionTracker.PlayerRotation(i, i));
                }

            }
        }

        public Vector3 GetPlayerPositionInGod(Vector3 pos)
        {
            return (pos * (_targetDistance / _baseDistance)) + _basePoint;
        }

        public void AddAnchor(ARPlaneAnchor arPlaneAnchor)
        {
            if (_floorDetectionStatus == FloorDetectionStatus.Finding)
            {


                if (_debug)
                {
                    debugMessage.text = "Anchor added";
                }
                Debug.Log("New Anchor added");


                // Get point of battle field by using ray from center of display to detected floor and 
                Vector3 center = new Vector3(Screen.width / 2, Screen.height / 2, 0.5f);
                var screenPosition = Camera.main.ScreenToViewportPoint(center);
                ARPoint point = new ARPoint
                {
                    x = screenPosition.x,
                    y = screenPosition.y
                };

                List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, ARHitTestResultType.ARHitTestResultTypeExistingPlane);
                if (hitResults.Count > 0)
                {
                    foreach (var hitResult in hitResults)
                    {
                        _basePoint = UnityARMatrixOps.GetPosition(hitResult.worldTransform) + _baseVector;
                    }
                }

                // Change floor detection status to detected
                _floorDetectionStatus = FloorDetectionStatus.Found;
                Debug.Log("Floor detected");
                mainMessage.text = "Detection Complete";

                // Invoke StartGame() with delay
                Invoke("StartGame", 0.5f);
            }
        }

        void StartGame()
        {
            _floorDetectionStatus = FloorDetectionStatus.GameStarting;
            imageMask.gameObject.SetActive(true);
            // Display Count down timer    
            _timeCount = MAX_TIME;
            mainMessage.text = ((int)_timeCount).ToString();
            _positionTracker = GetComponent<PositionTracker>();
            _playerObj = new GameObject[2];
            for (int i = 0; i < 2; i++)
            {
                _playerObj[i] = Instantiate(playerPrefab, GetPlayerPositionInGod(_positionTracker.PlayerPosition(i, i)), Quaternion.Euler(_positionTracker.PlayerRotation(i, i)));
                _playerObj[i].transform.localScale = Resize(_playerObj[i].transform.localScale);
            }
        }
        public Vector3 Resize(Vector3 scale)
        {
            return scale * (_targetDistance / _baseDistance);
        }

    }
}

