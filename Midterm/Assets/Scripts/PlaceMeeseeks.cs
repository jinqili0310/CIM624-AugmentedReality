using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.XR.iOS
{

    public class PlaceMeeseeks : MonoBehaviour
    {
        public GameObject MeeseeksParent;
        List<ARHitTestResult> hitResults;
        ARPoint point;

        public void bringToCenter()
        {
            Vector3 screenPosition = Camera.main.ScreenToViewportPoint(new Vector3(Screen.width / 2, Screen.height / 2, 1));
            point.x = screenPosition.x;
            point.y = screenPosition.y;
            hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point,
                ARHitTestResultType.ARHitTestResultTypeFeaturePoint);
            if (hitResults.Count > 0)
            {
                MeeseeksParent.transform.position = new Vector3(UnityARMatrixOps.GetPosition(hitResults[0].worldTransform).x,
                    UnityARMatrixOps.GetPosition(hitResults[0].worldTransform).y, 1);
            }
        }
    }

}
