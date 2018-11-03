/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 03:27:24 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
using std::string;

int main()
{
    string s;
    string::size_type index;

    cout << "please input the string" << endl;
    cin >> s;

    char *pc = new char[s.size() + 1];
    
    for (index = 0; index < s.size(); index++)
    {
        pc[index] = s[index];
    }

    //add the string end flags
    pc[index] = '\0';

    cout << pc << endl;

    return 0;
}
