/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Thu 01 Nov 2018 05:11:22 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    int value;

    while(cin >> value)
    {
        sum += value;
    }

    cout << "sum = " << sum << endl;

    return 0;
}
