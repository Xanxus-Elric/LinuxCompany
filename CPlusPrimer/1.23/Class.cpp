/*************************************************************************
	> File Name: Class.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Fri 02 Nov 2018 09:03:24 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Class.h"
#include <cstring>

List::List()
{
    pHead = NULL;
    pTail = NULL;
}

Node::Node(BookInfo& info)
{
    strcpy(this->ISBN, info.ISBN);
    this->price = info.price;
    this->count = info.count;

    pNext = NULL;
}

void List::AddNode(Node* node)
{
    if (pHead == NULL)
    {
        pHead = node;
        pTail = node;
    }
    else
    {
        pTail->pNext = node;
        pTail = node;
    }
}

Node* List::SearchNode(const char* string)
{
    Node* pTemp;

    for (pTemp = pHead; pTemp != NULL; pTemp = pTemp->pNext)
    {
        if (!strcmp(pTemp->ISBN, string))
        {
            return pTemp;
        }
    }

    //if not found, it will return NULL
    return pTemp;
}

istream& operator>>(istream& cin, BookInfo& info)
{
    cin >> info.ISBN;
    cin >> info.count;
    cin >> info.price;

    return cin;
}

ostream& operator<<(ostream& cout, BookInfo& info)
{
    cout << "the ISBN is    : " << info.ISBN << endl;
    cout << "the price is   : " << info.price << endl;
    cout << "the sale count : " << info.count << endl;
    cout << "the sale money : " << (info.count * info.price) << endl;

    return cout;
}

ostream& operator<<(ostream& cout, Node* node)
{
    cout << "ISBN       : " << node->ISBN << endl;
    cout << "Price      : " << node->price << endl;
    cout << "Sales      : " << node->count << endl;
    cout << "Saleroom   : " << node->count * node->price << endl;
}

