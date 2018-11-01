/*************************************************************************
	> File Name: Class.h
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Thu 01 Nov 2018 01:52:49 PM CST
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

#ifdef _cplusplus
extern "C" {
#endif

    class Node{
        private:
            char Name[128];
            
            void OutputName();

        public:
            friend class List;
            Node();    

            void SetName(const char* InputName);
    };

    class List{
        private:
            Node node;
        public:
            void Output();

    };


#ifdef _cplusplus
}
#endif

#endif
