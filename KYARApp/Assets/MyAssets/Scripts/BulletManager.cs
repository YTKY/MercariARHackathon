using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletManager : MonoBehaviour
{

    // 打った人
    private int _shooterId;
    public LineRenderer _trajectoryLineRenderer;

    public void SetShooterId(int shooterId)
    {
        _shooterId = shooterId;
    }

    private void OnTriggerEnter(Collider collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            int playerId; // 打たれた人
            playerId = collision.transform.GetComponent<PlayerController>().GetPlayerId();

            if (playerId != _shooterId)
            {
                Debug.Log("Shot the player " + playerId.ToString());
            }
        }
    }

    void Update()
    {
        SimulateTrajectory();
    }

    private void SimulateTrajectory()
    {
        Vector3 initialPosition = this.gameObject.transform.position;
        Vector3 initialVelocity = this.gameObject.transform.forward * 1000f;

        const int numberOfPositionsToSimulate = 50;
        const float timeStepBetweenPositions = 0.2f;

        // setup the initial conditions
        Vector3 simulatedPosition = initialPosition;
        Vector3 simulatedVelocity = initialVelocity;

        // update the position count
        _trajectoryLineRenderer.positionCount = numberOfPositionsToSimulate;

        for (int i = 0; i < numberOfPositionsToSimulate; i++)
        {
            // set each position of the line renderer
            _trajectoryLineRenderer.SetPosition(i, simulatedPosition);

            // change the velocity based on Gravity and the time step.
            simulatedVelocity += Physics.gravity * timeStepBetweenPositions;

            // change the position based on Gravity and the time step.
            simulatedPosition += simulatedVelocity * timeStepBetweenPositions;
        }
    }
}
