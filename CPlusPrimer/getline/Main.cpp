/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 09:33:39 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    string line;

    cout << "please input the line string" << endl;
    cout << "and Enter ctrl+d to quit" << endl;

    while(getline(cin, line))
        cout << line << endl;
    return 0;
}
