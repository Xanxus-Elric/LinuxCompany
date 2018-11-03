/*************************************************************************
	> File Name: CompareStringLength.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 10:51:08 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    string s1;
    string s2;

    cout << "please input the string1 " << endl;
    cin >> s1;

    cout << "please input the string2 " << endl;
    cin >> s2;

    cout << "longer: " << (s1.size() > s2.size() ? s1 : s2) << endl;

    return 0;
}
