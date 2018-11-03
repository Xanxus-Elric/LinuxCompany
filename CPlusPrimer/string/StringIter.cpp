/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 06:06:23 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include <string>
#include <iterator>

int main()
{
    string s;
    
    cout << "please input the string: " << endl;
    cin >> s;

    for (string::iterator iter = s.begin(); iter != s.end(); iter++)
    {
        if (islower(*iter))
        {
            *iter = toupper(*iter);
        }
    }

    cout << s << endl;

    return 0;
}
