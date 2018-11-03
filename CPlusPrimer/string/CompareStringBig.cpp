/*************************************************************************
	> File Name: CompareStringBig.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 10:44:54 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    string s1;
    string s2;

    cout << "please input the string 1" << endl;
    cin >> s1;

    cout << "please input the string 2" << endl;
    cin >> s2;
    
    s1 > s2 ? cout << "Max: " << s1 << endl : cout << "Max: " << s2 << endl;

    return 0;
}
