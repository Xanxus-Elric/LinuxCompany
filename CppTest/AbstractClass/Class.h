/*************************************************************************
	> File Name: Class.h
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 09:46:07 AM CST
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

#ifdef _cplusplus
extern "C" {
#endif

    class Base
    {
        public:
        virtual void VirFunc1(void){
            cout << "This is the first Virtual Function" << endl;
        }
        virtual void VirFunc2(void){
            cout << "This is the Second Virtual Function" << endl;
        }
        void Func(void){
            cout << "Not Virtual Function!\n";
        }
    };

    //Only realize one Virtual Function, this class still abstarct class
    class DerivedClass1:public Base
    {
        public:
            void VirFunc1(void)
            {
                cout << "realize the Virtual Function 1" << endl;
            }
            
    };

    class DerivedClass2:public Base
    {
        public:
        void VirFunc2(void){
            cout << "realize the Virtual Function 2" << endl;
        }
    };

#ifdef _cplusplus
}
#endif

#endif

