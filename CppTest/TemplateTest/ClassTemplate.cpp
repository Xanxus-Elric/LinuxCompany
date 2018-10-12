/*************************************************************************
	> File Name: ClassTemplate.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Fri 12 Oct 2018 11:12:59 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

template <typename T> class TestClass
{
    private:
        T value;

    public:
        TestClass(T v):value(v){}
        void SetValue(T v)
        {
            this->value = v;
        }
        void GetValue()
        {
            cout << "value : " << this->value << endl;
        }
        
};


int main()
{
    TestClass <int> a(5), b(6);
    a.GetValue();
    b.GetValue();
    
    TestClass <string> m("hello"), n("world");
    m.GetValue();
    n.GetValue();
    
}
