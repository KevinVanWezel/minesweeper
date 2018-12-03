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

hier word er gekeken of je op de linker en rechter muis klikt en of de muis dan boven een mijn zit zo ja dan heb je veloren
___________________________________________________________________________________

