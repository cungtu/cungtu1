#ifndef SANPHAM_H_INCLUDED
#define SANPHAM_H_INCLUDED
class sanpham
{
protected:
    string ma;
    string ten;
    string loai;
public:
    sanpham():ma(),ten(),loai(){}
    sanpham(string a, string b , string c):ma(a),ten(b),loai(c){}
    void setma(string a)
    {
        this->ma=a;
    }
    void setten(string a)
    {
        this->ten=a;
    }
    void setloai(string a)
    {
        this->loai=a;
    }
    string getma()const
    {
        return this->ma;
    }
     string getten()const
    {
        return this->ten;
    }
       string getloai()const
    {
        return this->loai;
    }
    virtual int TinhGiaSanPham()const=0;
    virtual  void print();
    ~sanpham(){}
    void Print()
    {
        cout<<"Hien thi ma san pham : "<<endl;
        this.getma();
        cout<<"Hien thi ten san pham :"<<endl;
        this.getten();
        cout<<"Hien thi loai san pham :"<<endl;
        this.getloai();
    }


};


#endif // SANPHAM_H_INCLUDED
