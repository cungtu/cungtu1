#include <iostream>
#include <fstream>
#include "hinhtron.h"
#include "toado.h"
using namespace std;

int main()
{	hinhtron s;
	hinhtron mang[5];
	for(int i=0;i<5;i++)
	{
		cout<< "nhap hinh tron thu :"<<i+1<<endl;
		cin>>mang[i];
	}
	hinhtron max=mang[0];
	for(int i=1; i<5; i++)
	{
		if(max<mang[i])
		{
			max.setbankinh(mang[i].getbankinh());
		}
		
	}
	for(int i=0;i<5;i++)
	{
		if(mang[i].getbankinh()==max.getbankinh())
			cout<<max;
	}
	
	ifstream file;
	file.open("DuLieuToaDo.txt",ios::in);
	cout<<"\nFile created successfully."<<endl;
	file.read((char*)&s,sizeof(s));
	for(int i=0; i<5;i++)
	{	if(mang[i].getbankinh()==max.getbankinh())
		{mang[i].showData();}
	}
	file.close();
}

