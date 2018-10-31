/*************************************************************************
	> File Name: Tank.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Tue 30 Oct 2018 08:58:02 AM CST
 ************************************************************************/

#include<iostream>
#include <cstring>

#include "Tank.h"

using namespace std;

string TankDrawFlag[4][3] = {
    {"*|*", "* *", "   "}, //UP
    {"   ", "* *", "*|*"}, //DOWN
    {" **", "-- ", " **"}, //LEFT
    {"** ", " --", "** "}  //RIGHT
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
        //set the position of the cursor
        SET_CUR_POST(StartX + i, StartY);
    
        cout << TankDrawFlag[this->Direction][i];
    }

    cout.flush();
}

void Tank::EraseTank()
{
    int i;
    int StartX;
    int StartY;

    StartX = this->TankCoordX - 1;
    StartY = this->TankCoordY - 1;

    for (i = 0; i < 3; i ++)
    {
        SET_CUR_POST(StartX + i, StartY);
        cout << "   ";
    }

    cout.flush();
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
                    EraseTank();
                    this->TankCoordX++;
                    DrawTank();
                }
            }
            break;

        case UP:
            this->Direction = UP_DIR;
            for (i = 0; i < this->TankSpeed; i++)
            {
                if ((this->TankCoordX <= COORD_MAX_X) && (this->TankCoordX > COORD_MIN_X))
                {
                    EraseTank();
                    this->TankCoordX--;
                    DrawTank();
                }
            }
            break;

        case RIGHT:
            this->Direction = RIGHT_DIR;
            for (i = 0; i < this->TankSpeed; i++)
            {
                if ((this->TankCoordY <= COORD_MAX_Y) && (this->TankCoordY > COORD_MIN_Y))
                {
                    EraseTank();
                    this->TankCoordY++;  
                    DrawTank();
                }
            }
            break;

        case LEFT:
            this->Direction = LEFT_DIR;
            for (i = 0; i < this->TankSpeed; i++)
            {
                if ((this->TankCoordY < COORD_MAX_Y) && (this->TankCoordY >= COORD_MIN_Y))
                {
                    EraseTank();
                    this->TankCoordY--;
                    DrawTank();
                }
            }
            break;

        default:
            break;           
    }
}


