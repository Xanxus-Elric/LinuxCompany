/*************************************************************************
	> File Name: Test.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Tue 30 Oct 2018 10:32:18 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include <cstdio>
#include <cstdlib>

#define SET_POST(X, Y) printf("\033[%d;%dH", (X), (Y)) 

string TankImage[2][3] = {
    {"*|*", "* *", "   "}, 
    {"   ", "   ", "   "}
};

int main()
{
    int i;
    int j;
    system("clear");
    while(1)
    {
        i = 100000;
        j = 20;
    SET_POST(20, 20);
    cout << TankImage[0][0];
    SET_POST(21, 20);
    cout << TankImage[0][1];
    SET_POST(22, 20);
    cout << TankImage[0][2];
    //cout << endl;
    while(i--);
    SET_POST(20, 20);
    cout << TankImage[1][0];
    SET_POST(21, 20);
    cout << TankImage[1][1];
    SET_POST(22, 20);
    cout << TankImage[1][2];
    //cout << endl;
    while(j--);
    }
}
