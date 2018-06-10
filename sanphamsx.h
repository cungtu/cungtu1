#ifndef SANPHAMSX_H_INCLUDED
#define SANPHAMSX_H_INCLUDED
class sanphamSX:public sanpham
{
protected:
        sanpham sx;
        int gia;
        int chiphi;
        string nam;
public:
    sanphamSX(string a, string b, string c, string d, int e, int f):a(a,b,c),gia(e),chiphi(f),nam(d){}
    sanphamSX():a(),gia(),chiphi(),nam(){}
    void setgia(int a)
    {
        this->gia=a;
    }
    void setchiphi(int a)
    {
        this->chiphi=a;
    }
    void setnam(string a)
    {
        this->nam=a;
    }
    int getgia()const
    {
        return this->gia;
    }
    int getchiphi()const
    {
        return this->chiphi;
    }
    string getnam()const
    {
        return this->nam;
    }
    virtual int TinhGiaSanPham()const
    {
        int kq;
        kq=(this->gia+this->chiphi)*1.2;
        return kq;
    }
    virtual void print()const
    {   this.Print();
        cout<<"Hien thi gia san pham :"<<endl;
        this.TinhGiaSanPham();
        cout<<"Hien thi nam san pham :"<<endl;
        this.getnam();
    }

};


#endif // SANPHAMSX_H_INCLUDED
