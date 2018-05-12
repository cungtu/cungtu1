#ifndef HINH_H
#define HINH_H
#include <iostream>
using namespace std;
class Hinh
{
    protected:
        float dai;
        float rong;
    public:
        Hinh(){
            this-> dai=0;
            this-> rong=0;
        }
        Hinh(float a, float b){
            this-> dai=a;
            this->rong=b;
        }
        void setdai(float a)
        {
            this->dai = a;
        }
        void setrong(float b)
        {
            this->dai = b;
        }
        void set2(float a, float b)
        {
            this->dai = a;
            this->rong = b;
        }
        float getdai()const
        {
            return this->dai;
        }
        float getrong()const
        {
            return this->rong;
        }
        float Chuvi()
        {
            float kq;
            kq = (this->dai + this->rong)*2;
            return kq;
        }
        float Dientich()
        {
            float kq;
            kq = this->dai*this->rong;
            return kq;
        }
};


#endif // HINH_H_INCLUDED
