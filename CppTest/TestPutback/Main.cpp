/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 11:04:03 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int extract_int()
{
    char ch;
    int n = 0;

    while(ch = cin.get()) //After the ch get the char from the cin
    {
        if (ch >= '0' && ch <= '9')
        {
            cin.putback(ch); //put the ch on the cin stream
            cin >> n;       //n get the same char as ch
            break;
        }
    }
    return n;
}

int main()
{
    int a = extract_int();
    int b = extract_int();
    int c = extract_int();

    cout << a << " + " << b << " = " << c << endl;
}
