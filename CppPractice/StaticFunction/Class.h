/*************************************************************************
	> File Name: Class.h
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Thu 01 Nov 2018 10:53:10 AM CST
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

#ifdef _cplusplus
extern "C" {
#endif

    class Book{
        public:
            static int Price;
            int Pages;
            
            static void OutputInfo();
            
    };

#ifdef _cplusplus
}
#endif

#endif
