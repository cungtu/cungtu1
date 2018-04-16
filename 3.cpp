#include <iostream>
#include <string>
using namespace std;
struct TP
{
	int tu;
	int mau;

};	
TP tong(TP a, TP b)
{
	TP S;
	S.tu=a.tu*b.mau+b.tu*a.mau;
	S.mau=a.mau*b.mau; 
	return S;
}
TP nhan(TP a, TP b)
{
	TP x;
	x.tu=a.tu*b.tu;
	x.mau=a.mau*b.mau;

}
int main()
{	TP s;
	TP a;
	TP c;
	TP b;
	cout<< "nhap tu a ";
	cin>>a.tu;
	cout<< "nhap mau a ";
	cin>>a.mau;
	cout<< "nhap tu b ";
	cin>>b.tu;
	cout<< "nhap mau b ";
	cin>>b.mau;
	s=tong(a,b);
	c=nhan(a,b);
	cout<<s.tu<<"/"<<s.mau;
	cout<<c.tu<<"/"<<c.mau;
	
	
}

