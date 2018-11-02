/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Fri 02 Nov 2018 02:21:48 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Class.h"

int main()
{
    Sale total;
    Sale trans;

    //Initialize the first Sale
    if (cin >> total)
    {
        //Enter the another Sale
        while(cin >> trans)
        {
            //if the ISBN code is same
            //update the total's data
            if (!IsSameISBN(total, trans))
            {
                total += trans;
            }
            else
            {
                //reset the total's data
                cout << total << endl;
                total = trans;
            }
        }

        cout << total << endl;
    }
    else
    {
        cout << "No Data?" << endl;
        return -1;
    }

    return 0;
}
