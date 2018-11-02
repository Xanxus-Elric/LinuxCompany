/*************************************************************************
	> File Name: Class.h
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Fri 02 Nov 2018 09:03:44 AM CST
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

#ifdef _cplusplus
extern "C" {
#endif

    class BookInfo{

        public:
            char    ISBN[128];
            float   price;
            int     count;

            friend istream& operator>>(istream& cin, BookInfo& info);
            friend ostream& operator<<(ostream& cout, BookInfo& info);
    };

    class Node{
        public:
            char    ISBN[128];
            float   price;
            int     count;
            Node*   pNext;

            Node(BookInfo& info);

            friend ostream& operator<<(ostream& cout, Node* pnode);
    };

    class List{
        public:
            Node* pHead;
            Node* pTail;

            List();
            void AddNode(Node* node);
            Node* SearchNode(const char* string);
    };



//>> operator overload 
istream& operator>>(istream& cin, BookInfo& info);
//<< operator overload
ostream& operator<<(ostream& cout, BookInfo& info);
ostream& operator<<(ostream& cout, Node* pnode);

#ifdef _cplusplus
}
#endif

#endif
