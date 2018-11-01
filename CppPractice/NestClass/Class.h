/*************************************************************************
	> File Name: Class.h
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Thu 01 Nov 2018 01:19:47 PM CST
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

#ifdef _cplusplus
extern "C"{
#endif

    class List{
        public:
            class Node{
                //set the class List as the friend class of Node
                friend class List;

                private:
                    int Tag;
                public:
                    char Name[128];
            };

            Node node;

            void SetNodeTag(int Tag);
            void SetNodeName(const char* Name);
    };

#ifdef _cplusplus
}
#endif

#endif
