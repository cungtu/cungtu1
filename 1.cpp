#include <iostream>
using namespace std;
class phanso
{
	private:
		int tuso;
		int mauso;
	public:
		//seters
		void settuso(int cc)
		{
			this->tuso=cc;
		}
		void setmauso(int ss)
		{
			this->mauso=ss;
		}
		//geters
		int gettuso()
		{
			return this->tuso;
		}
		int getmauso()
		{
			return this->mauso;
		}
		phanso cong(phanso b)
		{	
		 	phanso kq;
			kq.settuso(this->tuso*b.getmauso()+this->mauso*b.gettuso());
			kq.setmauso(this->mauso*b.getmauso());
			return kq;	
		}
		phanso rutgon(phanso kq)
		{	phanso s;
			s.tuso=this->tuso;
			s.mauso=this->mauso;
			while(this->tuso%this->mauso!=0)
			{	
				this->mauso=this->tuso%this->mauso;
				this->tuso=this->mauso;
				
			}
			s.tuso=s.tuso/this->mauso;
			s.mauso=s.mauso/this->mauso;
			return s;
		}

};
int main()
{
	phanso a,b,kq,s;
	a.settuso(20);
	a.setmauso(10);
	b.settuso(10);
	b.setmauso(10);
	kq=a.cong(b);
	cout<<kq.gettuso()<<"/"<<kq.getmauso()<<endl;
	phanso nhanh=kq.rutgon(s);
	cout<<nhanh.gettuso()<<"/"<<nhanh.getmauso()<<endl;
}
