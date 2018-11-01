/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Thu 01 Nov 2018 05:32:57 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

void ShowValue(int Min, int Max);

int main()
{
    int value1;
    int value2;

    cout << "please input two integer" << endl;
    cout << "and we will show the integer between this two integer" << endl;

    cout << "please input the first integer: " << endl;
    cin >> value1;

    cout << "please input the second integer " << endl;
    cin >> value2;

    value2 > value1 ? ShowValue(value1, value2) : ShowValue(value2, value1);

    return 0;
}

void ShowValue(int Min, int Max)
{
    for (int i = ++Min; i < Max; i++)
    {
        cout << i << " ";
    }

    cout << endl;
}


