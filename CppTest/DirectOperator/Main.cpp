/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 03:29:30 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

const int MAX_PATH = 250;

int main()
{
    char *p, str[MAX_PATH];

    if (mkdir("./TestPkg", S_IRWXU))
    {
        cout << "Create a new directory Failed" << endl;
    }

    if (chdir("./TestPkg"))
    {
        cout << "change to the TestPkg Failed" << endl;
    }

    if ((p = getcwd(str, MAX_PATH)) == NULL)
    {
        cout << "getcwd Error" << endl;
    }
    else
    {
        cout << "p: " << p << endl;
        cout << "str: " << str << endl;
    }

    if (chdir("../"))
    {
        cout << "change directory to parent directory Failed" << endl;
    }

    if (rmdir("./TestPkg"))
    {
        cout << "remove directory failed" << endl;
    }
}
