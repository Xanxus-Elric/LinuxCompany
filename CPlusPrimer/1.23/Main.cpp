/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Fri 02 Nov 2018 09:03:37 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Class.h"

int main()
{
    //Initialize the list
    List        list;
    BookInfo    Temp;
    Node*       pNode;

    cout << "please input the info with the format(ISBN SaleCount Price)" << endl;

    while(cin >> Temp)
    {
        //search the ISBN from the list
        pNode = list.SearchNode(Temp.ISBN);

        if (NULL == pNode)
        {
            //not found
            //Add new node

            Node* NewNode = new Node(Temp);
            list.AddNode(NewNode);
        }
        //found the node, update the count of the node
        else
        {
            pNode->count += Temp.count;
        }
    }
    
    for (pNode = list.pHead; pNode != NULL; pNode = pNode->pNext)
    {
        cout << pNode << endl;
        cout << "*************************" << endl;
    }
    
    return 0;
}


