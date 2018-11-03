/*************************************************************************
	> File Name: StringCCtype.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 10:23:36 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include <cctype>

int main()
{
    string input;
    string::size_type index;


    cout << "please input the string" << endl;
    cin >> input;

    for (index = 0; index < input.size(); index++)
    {
        if (isalpha(input[index]))
        {
            cout << "this char is letter" << endl;
        }
        else if (isdigit(input[index]))
        {
            cout << "this char is number" << endl;
        }
    }

    return 0;
}
