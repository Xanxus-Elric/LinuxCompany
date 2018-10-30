/*************************************************************************
	> File Name: Tank.h
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Tue 30 Oct 2018 02:22:34 PM CST
 ************************************************************************/

#ifndef _TANK_H
#define _TANK_H

#ifdef _cplusplus
extern "C" {
#endif 

#include <iostream>
#include <cstdio>
#include <unistd.h>

    class Tank {
        private:
            int Direction;
            int TankCoordX;
            int TankCoordY;
            int TankSpeed;

        public:
            Tank(int Direction, int CoordX, int CoordY, int TankSpeed);
            void TankMove(int DirectKey);
            void DrawTank();
    };

//THE FLAG OF TANK'S DIRECTION
#define UP_DIR      0
#define DOWN_DIR    1
#define LEFT_DIR    2
#define RIGHT_DIR   3

//THE KEY CODE OF UP, DOWN, LEFT, RIGHT
#define UP          'w'
#define DOWN        's'
#define LEFT        'a'
#define RIGHT       'd'

//the tank move range
#define COORD_MAX_Y (FRAME_MAX_Y - 2)
#define COORD_MIN_Y (FRAME_MIN_Y + 2)
#define COORD_MAX_X (FRAME_MAX_X - 2)
#define COORD_MIN_X (FRAME_MIN_X + 2)

//the game frame range
#define FRAME_MAX_X 100
#define FRAME_MAX_Y 100
#define FRAME_MIN_X 0
#define FRAME_MIN_Y 0

//the macro defination of cursor's setting operation
#define SET_CUR_POST(X, Y) printf("\033[%d;%dH", (X), (Y))

#ifdef _cplusplus
}
#endif

#endif
