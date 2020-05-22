using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sculptureChoose : MonoBehaviour
{
    public GameObject[] sculpture;
    private int index;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        sculpture[index].SetActive(true);
        for (int i = 0; i < sculpture.Length; i++){
            if (i != index){
                sculpture[i].SetActive(false);
            }
        }
    }

    public void SwapSculpture(int sculpture){
        index = sculpture;
    }
}
