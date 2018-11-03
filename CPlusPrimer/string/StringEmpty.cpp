/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 09:53:53 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    string input;

    while(cin >> input)
    {
        //this branch will never excute
        //becase the loop condition
        if (input.empty())
        {
            cout << "Empty string" << endl;
        }
        else
        {
            cout << input << endl;
        }
    }

    return 0;
}
