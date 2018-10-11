/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 02:37:35 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    string s1, s2;

    s1 = "One";
    s2 = "Two";

    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;

    string s3 = s1 + " and " + s2;
    cout << "s3 = " << s3 << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "_________________________" << endl;
        cout << "s1 = " << endl;
        cin >> s1;

        cout << "s2 = " << endl;
        cin >> s2;

        if (s1 > s2)
        {
            cout << s1 << ">" << s2 << endl;
        }
        else if (s1 < s2)
        {
            cout << s1 << "<" << s2 << endl;
        }
        else if (s1 == s2)
        {
            cout << s1 << "==" << s2 << endl;
        }
        else
        {
            cout << s1 << "!=" << s2 << endl;
        }
    }
}
