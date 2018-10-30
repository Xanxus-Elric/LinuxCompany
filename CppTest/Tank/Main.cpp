/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Tue 30 Oct 2018 08:57:55 AM CST
 ************************************************************************/

#include <iostream>
#include <pthread.h>
#include <cstdlib>
#include <termio.h>
#include <unistd.h>
#include "Tank.h"

using namespace std;

enum SpeedLevel{ONE_SPEED = 1, SECOND_SPEED = 2, THIRD_SPEED = 3};

enum SpeedLevel Speed = ONE_SPEED;

//declare the mutex here
pthread_mutex_t mutex;

//define the speed later
Tank Player(UP_DIR, 30, 30, Speed);
//Tank Enemy(DOWN_DIR, 0, 0, ONE_SPEED)

void FlushScreen(void)
{
    int i, j;

    //clear the screen
    system("clear");

    //draw the game frame
    for (i = 0; i <= FRAME_MAX_X; i++)
    {
        SET_CUR_POST(i, 0);
        cout << "=";
        SET_CUR_POST(i, FRAME_MAX_Y);
        cout << "=";
    }

    for (i = 2; i < FRAME_MAX_Y - 1; i++)
    {
        SET_CUR_POST(0, i);
        cout << "|";
        SET_CUR_POST(FRAME_MAX_X, i);
        cout << "|";
    }

    cout << flush;

    //draw the tank
    while(1)
    {

        pthread_mutex_lock(&mutex);
        
        //according the data of the tank instance to draw
        Player.DrawTank();

        pthread_mutex_unlock(&mutex);
    }
}


int getch(void)
{
    struct termios tm, tm_old;
    int fd = 0;
    int ch;

    if (tcgetattr(fd, &tm) < 0)
    {
        return -1;
    }

    tm_old = tm;

    cfmakeraw(&tm);

    if (tcsetattr(fd, TCSANOW, &tm) < 0)
    {
        return -1;
    }

    ch = getchar();

    if (tcsetattr(fd, TCSANOW, &tm_old) < 0)
    {
        return -1;
    }

    return ch;
}

void* UpdateTankData(void* arg)
{
    int ArrowInput;
    while(1)
    {
        ArrowInput = getch();
        
        pthread_mutex_lock(&mutex);
            
        Player.TankMove(ArrowInput);

        pthread_mutex_unlock(&mutex);
    }
}

int main()
{
    pthread_t UpdateData;

    pthread_mutex_init(&mutex, NULL);

    system("clear");

    //hide the cursor
    cout << "\033[?25l" << endl;


    //create a pthread to refresh the screen
    if (pthread_create(&UpdateData, NULL, UpdateTankData, NULL) != 0)
    {
        cout << "pthread_create() error";
        return -1;
    }

    FlushScreen();

    //get the user's input to update the data of user's Tank

    pthread_join(UpdateData, NULL);
    pthread_mutex_destroy(&mutex);
    
    return 0; 
}

