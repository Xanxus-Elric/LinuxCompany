/*************************************************************************
	> File Name: ListClass.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 11:15:17 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include "ListClass.h"

List::List()
{
    //Initialize the HeadNode
    Head = NULL;
    Tail = NULL;
}

List::~List()
{
    ClearAll();
}

void List::TailAdd()
{
    //create a Node
    Node *node = new Node;

    //fill in the Node data
    cout << "Please input the data of the Node: " << endl;
    cin >> node->Data;

    //Add Node
    if (Head == NULL)
    {
        //let the Head point to the first Node of this LinkList
        Head = node;
        Tail = node;
        Head->Next = NULL;
        Head->Previous = NULL;

    }
    else
    {
        //Add the new node to the Tail
        Tail->Next = node;
        node->Previous = Tail;
        node->Next = NULL;
        Tail = node;
    }   
}

void List::HeadAdd()
{
    Node *node = new Node;
    
    //fill in the Node data
    cout << "Please input the data of the Node: " << endl;
    cin >> node->Data;

    if (Tail == NULL)//the first Node
    {
        node->Next = NULL;
        node->Previous = NULL;
        Head = node;
        Tail = node;
    }
    else//the new node isn't first node
    {
        node->Previous = NULL;
        node->Next = Head;
        Head->Previous = node;
        Head = node;
    }
}

void List::ShowNodeOnPostive()
{
    Node *pNode = Head;
    int i = 0;
    while(pNode)
    {
        cout << "The "<< ++i << "Node Data: " << pNode->Data << endl;
        pNode = pNode->Next;
    }
}

void List::ShowNodeOnNegative()
{
    Node *pNode = Tail;
    int i = 0;
    while(pNode)
    {
        cout << "The " << ++i << "Node Data: " << pNode->Data << endl;
        pNode = pNode->Previous;
    }
}

void List::ClearAll()
{
    //Delete the node from the Tail to the Head
    Node *pNode = Tail;
    while(pNode != NULL)
    {
        Node *pTemp = pNode;
        pNode = pNode->Previous;
        delete pTemp;
    }
    Head = NULL;
    Tail = NULL;
}

void List::DeleteNode()
{
    string DelStr;
    Node *pNode = Head;
    int DelCount = 0;
    //delete the node that the node's data is match to the user input
    cout << "Please input the data which you want to delete: " << endl;
    cin >> DelStr;

    //search the node which match to the string from the head to Tail
    while(pNode)
    {
        Node *pTemp = pNode;
        pNode = pNode->Next;

        if (pTemp->Data == DelStr)//search the matching Node
        {
            DelCount++;
            //Delete the node 
            if (pTemp == Head)
            {
                Head = Head->Next;
                Head->Previous = NULL;
                delete pTemp;
            }
            else if (pTemp == Tail)
            {
                Tail = Tail->Previous;
                Tail->Next = NULL;
                delete pTemp;
            }
            else
            {
                pTemp->Previous->Next = pTemp->Next;
                pTemp->Next->Previous = pTemp->Previous;
            }
        }
    }

    cout << "Have been searched " << DelCount << " Node matched to the string" << endl;
}

