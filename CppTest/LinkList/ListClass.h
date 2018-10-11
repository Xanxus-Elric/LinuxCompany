/*************************************************************************
	> File Name: ListClass.h
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 11:15:25 AM CST
 ************************************************************************/

#ifndef _LISTCLASS_H
#define _LISTCLASS_H

#ifdef _cplusplus
extern "C" {
#endif

    class Node
    {
        friend class List;
        private:
            string Data;
            Node *Previous;
            Node *Next;
    };

    class List
    {
        private:
            Node *Head;
            Node *Tail;

        public:
            List();
            ~List();
            //Add Node on Head
            void HeadAdd();
            //Add Node on Tail
            void TailAdd();
            //show the data of Node from the head to tail
            void ShowNodeOnPostive();
            //show the data of Node from the tail to head 
            void ShowNodeOnNegative();
            //delete all Node
            void ClearAll();
            //delete one Node that user point to 
            void DeleteNode();
    };


#ifdef _cplusplus
}
#endif

#endif
