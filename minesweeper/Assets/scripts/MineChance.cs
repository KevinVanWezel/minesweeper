using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MineChance : MonoBehaviour
{
    [SerializeField]
    GameManger _GameManger;

    public AudioClip tripped;

    public AudioSource tripping;

    public bool mine = false;

    public bool leftMouseClicked = false;
    

    public Sprite[] emptyTextures;
    public Sprite mineTexture;
    public Sprite flagTexture;

    
    void Start()
    {

       


        mine = Random.value < 0.15;

        int x = (int)transform.position.x;
        int y = (int)transform.position.y;
        Grid.elements[x, y] = this;

        tripping.clip = tripped;
    }

    public void loadTexture(int adjacentCount)
    {
        if (mine)
            GetComponent<SpriteRenderer>().sprite = mineTexture;
        else
            GetComponent<SpriteRenderer>().sprite = emptyTextures[adjacentCount];
    }
    public bool isCoverd()
    {
        return GetComponent<SpriteRenderer>().sprite.texture.name == "Default";
    }

    void OnMouseOver()
    {


        if (Input.GetMouseButton(0))
        {
            if (_GameManger.isMineClicked == false && leftMouseClicked == false)
            {

                if (mine)
                {
                    _GameManger.reciever();
                    Grid.uncoverMines();
                    print("you lose");
                    tripping.Play();

                }
                else
                {

                    int x = (int)transform.position.x;
                    int y = (int)transform.position.y;
                    loadTexture(Grid.adjacentMines(x, y));

                    Grid.FFuncover(x, y, new bool[Grid.w, Grid.h]);
                    if (Grid.isFinished())
                        print("you win");

                }
            }
        }
        if (Input.GetMouseButtonDown(1))
        {
            if (_GameManger.isMineClicked == false)
            {

                if (leftMouseClicked == false)
                {
                    GetComponent<SpriteRenderer>().sprite = flagTexture;
                }
                else
                {
                    GetComponent<SpriteRenderer>().sprite = emptyTextures[9];
                }
                leftMouseClicked = !leftMouseClicked;
            }
        }
    }
   
    }
    


    
