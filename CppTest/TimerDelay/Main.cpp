/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 02:50:23 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include <ctime>
#include <cstdlib>

void DelayTime(int Seconds)
{
    time_t StartTime;
    time_t CurrentTime;
    int StarCount;

    time(&StartTime);
    do{
        int i = 0;

        time(&CurrentTime);//get the current time 

        if (((CurrentTime - StartTime) - StarCount) == 1)
        {
            system("clear");

            StarCount = CurrentTime - StartTime;

            while((i++) != StarCount)
            {
                cout << "*";
            }

            cout << endl;
        }
        
    }while(StarCount < Seconds);
}

int main()
{
    int Delay;

    cout << "The First Information" << endl;
    
    cout << "please input the delay Times" << endl;
    cin >> Delay;

    DelayTime(Delay);

    cout << "The Second Information" << endl;
}
