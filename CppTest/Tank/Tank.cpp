/*************************************************************************
	> File Name: Tank.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Tue 30 Oct 2018 08:58:02 AM CST
 ************************************************************************/

#include<iostream>

#include "Tank.h"

using namespace std;

int TankDrawFlag[4][9] = {
    {0, 1, 0, 1, 1, 1, 1, 0, 1}, //UP
    {1, 0, 1, 1, 1, 1, 0, 1, 0}, //DOWN
    {0, 1, 1, 1, 1, 0, 0, 1, 1}, //LEFT
    {1, 1, 0, 0, 1, 1, 1, 1, 0}  //RIGHT
};

Tank::Tank(int Direction, int CoordX, int CoordY, int TankSpeed/*, int FirePower*/)
{
    //initialize the default value of the Tank
    this->Direction     = Direction;
    this->TankCoordX    = CoordX;
    this->TankCoordY    = CoordY;
    this->TankSpeed     = TankSpeed;
    //this->FirePower       = FirePower;
}   

//according the user's key to set the TankCoord of the tank
void Tank::TankMove(int DirectKey)
{
    int i;

    switch(DirectKey)
    {
        case DOWN:
            //SET THE TANK'S DIRECTION AS UP, FOR DRAWING THE TANK
            this->Direction = DOWN_DIR;
            //the tank speed reflect the count of the tank move an unit
            for (i = 0; i < this->TankSpeed; i++)
            {
                //JUDGE IF THE TANK CAN GO UP
                if ((this->TankCoordX < COORD_MAX_X) && (this->TankCoordX >= COORD_MIN_X))
                {
                    this->TankCoordX++;
                }
            }
            break;

        case UP:
            this->Direction = UP_DIR;
            for (i = 0; i < this->TankSpeed; i++)
            {
                if ((this->TankCoordX <= COORD_MAX_X) && (this->TankCoordX > COORD_MIN_X))
                {
                    this->TankCoordX--;
                }
            }
            break;

        case RIGHT:
            this->Direction = RIGHT_DIR;
            for (i = 0; i < this->TankSpeed; i++)
            {
                if ((this->TankCoordY <= COORD_MAX_Y) && (this->TankCoordY > COORD_MIN_Y))
                {
                    this->TankCoordY++;  
                }
            }
            break;

        case LEFT:
            this->Direction = LEFT_DIR;
            for (i = 0; i < this->TankSpeed; i++)
            {
                if ((this->TankCoordY < COORD_MAX_Y) && (this->TankCoordY >= COORD_MIN_Y))
                {
                    this->TankCoordY--;
                }
            }
            break;

        default:
            break;
            
    }
}

void Tank::DrawTank()
{
    //the loop reference
    int i, j, k = 0;
    int StartX;
    int StartY;

    //according the direction and the coord of the tank to draw the tank 
    StartX = this->TankCoordX - 1;
    StartY = this->TankCoordY - 1;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            //set the position of the cursor
            SET_CUR_POST(StartX + i, StartY + j);
            //judge the direction, and draw the Tank
            if (TankDrawFlag[this->Direction][k++] != 0)
            {
                cout << "■";
            }
        }
    }

    sleep(5*10);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            SET_CUR_POST(StartX + i, StartY + j);
            cout << "  ";
        }
    }

    cout.flush();
}
