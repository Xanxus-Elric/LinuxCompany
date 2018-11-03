/*************************************************************************
	> File Name: ExchangeUppLow.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 10:38:19 AM CST
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
        if (islower(input[index]))
        {
            input[index] = toupper(input[index]);
        }
        else if (isupper(input[index]))
        {
            input[index] = tolower(input[index]);
        }
    }

    cout << input << endl;

    return 0;
}


