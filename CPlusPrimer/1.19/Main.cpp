/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Thu 01 Nov 2018 05:43:06 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int value1 = 1000;
    int value2 = 2000;

    int LoopCount;

    cout << "we will show the integer between 1000~2000" << endl;

    for (LoopCount = 1001; LoopCount < 2000; LoopCount++)
    {
        cout << LoopCount << "\t";

        if (!(LoopCount % 10))
        {
            cout << endl;
        }
    }

    cout << endl;

    return 0;
}
