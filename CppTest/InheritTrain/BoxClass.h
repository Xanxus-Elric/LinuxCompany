/*************************************************************************
	> File Name: BoxClass.h
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Wed 10 Oct 2018 03:22:27 PM CST
 ************************************************************************/

#ifndef _BOXCLASS_H
#define _BOXCLASS_H

#ifdef _cplusplus
extern "C" {
#endif

    class Box
    {
        private:
            int Length;
            int Width;
            int Height;
        public:
            Box();
            ~Box();
            void ShowtheInfo(void);
    };

    class ColorBox:public Box
    {
        private:
            string Color;
        public:
            ColorBox();
            ~ColorBox();
        void ShowtheInfo(void);
    };

#ifdef _cplusplus
}
#endif

#endif
