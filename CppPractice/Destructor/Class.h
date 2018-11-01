/*************************************************************************
	> File Name: Class.h
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Wed 31 Oct 2018 05:06:48 PM CST
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

#ifdef _cplusplus
extern "C" {
    #endif

    class Person{
        public:
            Person();
            ~Person();
            
            char* Message;
    };

#ifdef _cplusplus
}
#endif

#endif
