/*************************************************************************
	> File Name: StringDelPunct.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 11:03:01 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include <cctype>

int main()
{
    string input;
    string output;
    string::size_type index;

    cout << "please input the string which need to delete the punctuation" << endl;
    cin >> input;

    for (index = 0; index < input.size(); index++)
    {
        //judge if the character is punctuation
        if (ispunct(input[index]))
        {
            index++;
            continue;
        }

        output += input[index];
    }

    cout << "the string after deleting puncuation: " << output << endl;

    return 0;
}
