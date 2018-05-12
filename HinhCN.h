#ifndef HINHCN_H
#define HINHCN_H
#include "Hinh.h"
#include "Diem.h"
class HinhCN: public Hinh
{
    private:
        Diem DT;
    public:
        HinhCN(): Hinh(0,0){}
        HinhCN(float a, float b): Hinh(a,b){}
        void setDTx(float a)
        {
            DT.setX(a);
        }
        void setDTy(float b)
        {
            DT.setY(b);
        }
        float getDTx()const
        {
            return DT.getX();
        }
        float getDTy()const
        {
            return DT.getY();
        }
        HinhCN operator +(HinhCN b)
        {   HinhCN kq;
            HinhCN kq(this->dai + b.getdai(), this->rong + t.getrong());
            kq.setDTx(DT.getX());
            kq.setDTy(DT.getY());
            return kq;
        }
        void Xuat()
        {
            cout<<"Toa do dinh trai o tren: ("<<getDTx()<<"; "<<getDTy()<<" )"<<endl;
            cout<<"Chieu dai: "<<getdai()<<endl;
            cout<<"Chieu rong: "<<getrong()<<endl;
        }
        void Nhap()
        {
            float a,b,x,y;
            cout<<"Nhap chieu dai HCN : ";
            cin>>a;
            cout<<"Nhap chieu rong HCN : ";
            cin>>b;
            set2(a,b);
            cout<<"Nhap toa do cua x va y: ";
            cin>>x>>y;
            setDTx(x);
            setDTy(y);
        }
};



#endif // HINHCN_H_INCLUDED
