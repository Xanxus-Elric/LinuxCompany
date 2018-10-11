/*************************************************************************
	> File Name: Class.h
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 09:03:34 AM CST
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

#ifdef _cplusplus
extern "C" {
#endif

    class Circle
    {
        private:
            float Radius;

        public:
            Circle(float r);
            float SizeofCircle();
    }; 

    class Table
    {
        private:
            float Height;

        public:
            Table(float H);
            float RetHeight();
    };

    enum Color
    {
        Red, Yellow, Green, White
    };

    class RoundTable:public Circle, public Table
    {
        private:
            Color TableColor;

        public:
            RoundTable(float h, float r, Color c);
            int GetColor();
    };

#ifdef _cplusplus
}
#endif

#endif
