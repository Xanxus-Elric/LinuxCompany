/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Thu 01 Nov 2018 05:54:46 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

void Caulate(int Min, int Max);

int main()
{
    int value1;
    int value2;

    cout << "please input the first value :" << endl;
    cin >> value1;

    cout << "please input the second value :" << endl;
    cin >> value2;

    value2 > value1 ? Caulate(value1, value2) : Caulate(value2, value1);

    return 0;
}

void Caulate(int Min, int Max)
{
    int i;
    int sum = 0;
    
    for (i = Min; i <= Max; i++)
    {
        sum += i;
    }

    cout << "sum :" << sum << endl;
}
