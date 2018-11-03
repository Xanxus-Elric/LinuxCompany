/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 01:21:23 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include <vector>
#include <cctype>

using std::vector;

const int FormatControl = 4;

int main()
{
    vector<string> Word;
    vector<string>::size_type WordIndex;
    string::size_type StringIndex;

    string Input;

    while(cin >> Input)
    {
        Word.push_back(Input);
    }

    for (WordIndex = 0; WordIndex != Word.size(); WordIndex++)
    {
        //exchange the lower letter to upper letter
        for (StringIndex = 0; StringIndex != Word[WordIndex].size(); StringIndex++)
        {
            if (islower(Word[WordIndex][StringIndex]))
            {
                Word[WordIndex][StringIndex] = toupper(Word[WordIndex][StringIndex]);
            }
        }
        
        cout << Word[WordIndex] << " ";
            
        if (((WordIndex+1) % FormatControl) == 0)
        {
            cout << endl;
        }
    }   

    return 0;
}
