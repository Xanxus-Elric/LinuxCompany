/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 03:49:37 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>

int main()
{
    struct stat Buffer;

    int Result;

    Result = stat("./TestFile", &Buffer);

    if (Result)
    {
        cout << "Some Problem on getting information" << endl;
    }
    else
    {
        cout << "Size: " << Buffer.st_size << endl;
        cout << "Disk: " << Buffer.st_dev << endl;
        cout << "Create Time: " << ctime(&Buffer.st_ctime) << endl;
        cout << "Last Access Time: " << ctime(&Buffer.st_atime) << endl;
        cout << "Last Modify TIme: " << ctime(&Buffer.st_mtime) << endl;
    }
}
