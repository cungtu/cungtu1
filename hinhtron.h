#include"toado.h"
#ifndef HINHTRON_H
#define HINHTRON_H
class hinhtron:public toado
{
	protected:
		toado Tam;
		int bankinh ;
		
	public:
		hinhtron():Tam(0,0), bankinh(0){}
		hinhtron(int  a, int c, int b):Tam(a,c),bankinh(b){}
		void setbankinh(int a)
		{
			this->bankinh=a;
		}
	
		int getbankinh()const
		{
			return this->bankinh;
			
		}
		void showData()
        {
        cout<<"TOA DO "<<this->tung<<","<<this->hoanh<<endl;
		}
		

		hinhtron operator + (int n)
		{
			 this->bankinh=this->bankinh+n;
		}
		hinhtron operator - (int n)
		{
			 this->bankinh=this->bankinh-n;
		}
		int operator >(hinhtron a)
		{
			if(this->bankinh>a.getbankinh())
				{return 1;}
			else
				{return 0;}
		}
		bool operator <(hinhtron a)
		{
			if(this->bankinh<a.getbankinh())
				{return 1;}
			else
				{return 0;}	
		}
		
		bool kiemtra(toado a)
		{
			
		}
		
		friend istream &operator >>(istream &in, hinhtron &a)
		{
			cout<<"++nhap toa do tam :";
			in>>a.tung;
			in>>a.hoanh;
			cout<<"nhap do dai bankinh : ";
			in>>a.bankinh;
			return in;
		}
		friend ostream &operator <<(ostream &out, hinhtron &a )
		{
			cout<<"in ra toa do tam :";
			out<<a.tung<<",";
			out<<a.hoanh<<endl;
			cout<<"in ra bankinh : ";
			out<<a.bankinh<<endl;
			return out;
		
		}
		
	
};
#endif
