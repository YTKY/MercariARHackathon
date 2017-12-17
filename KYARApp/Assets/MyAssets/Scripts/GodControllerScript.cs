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

        // Game management
        private float MAX_TIME = 5;
        private bool _debug = true;
        private float timeCount;
        private FloorDetectionStatus _floorDetectionStatus;

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
                  "z = " + Camera.main.transform.position.z.ToString() + "\n";
            }
            if (_floorDetectionStatus == FloorDetectionStatus.GameStarting)
            {
                timeCount -= Time.deltaTime;
                mainMessage.text = ((int)timeCount).ToString();
                if (timeCount <= 1 && timeCount > 0)
                {
                    mainMessage.text = "Start!";
                    imageMask.gameObject.SetActive(false);

                }
                else if (timeCount <= 0)
                {
                    mainMessage.text = "";
                    mainMessage.gameObject.SetActive(false);
                    _floorDetectionStatus = FloorDetectionStatus.GameStarted;
                }
            }

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
                        Vector3 foundSquare = UnityARMatrixOps.GetPosition(hitResult.worldTransform);
                        Debug.Log(string.Format("Ray x:{0:0.######} y:{1:0.######} z:{2:0.######}", foundSquare.x, foundSquare.y, foundSquare.z));
                        if (_debug)
                        {
                            debugMessage.text = string.Format("Ray x:{0:0.######} y:{1:0.######} z:{2:0.######}", foundSquare.x, foundSquare.y, foundSquare.z);
                        }
                    }
                }

                // Deactive mainMesage window		
                mainMessage.text = "";

                // Change floor detection status to detected
                _floorDetectionStatus = FloorDetectionStatus.Found;
                Debug.Log("Floor detected");

                // Invoke StartGame() with delay
                Invoke("StartGame", 1.0f);
            }
        }

        void StartGame()
        {
            _floorDetectionStatus = FloorDetectionStatus.GameStarting;
            imageMask.gameObject.SetActive(true);
            // Display Count down timer 
            timeCount = MAX_TIME;
            mainMessage.text = ((int)timeCount).ToString();
        }

    }
}

