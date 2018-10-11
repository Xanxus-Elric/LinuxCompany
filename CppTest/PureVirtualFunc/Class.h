/*************************************************************************
	> File Name: Class.h
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 10:11:49 AM CST
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

#ifdef _cplusplus
extern "C" {
#endif

    class Base 
    {
        public:
            virtual void VirtualFunc(void) = 0;
    };

    class DerivedClass:public Base
    {
        public:
        void VirtualFunc(void){
            cout << "realize the Virtual Function" << endl;
        }
    };

    class ResetClass:public Base
    {
        public:
        void VirtualFunc(void)
        {
            cout << "Reset the Virtual Function" << endl;
        }
    };

#ifdef _cplusplus
}
#endif

#endif
