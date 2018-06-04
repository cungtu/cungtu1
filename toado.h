#ifndef TOADO_H
#define TOADO_H
#include<iostream>
using namespace std;
class toado
{
	protected:
		int tung ;
		int hoanh;
	public:
		toado():tung(0),hoanh(0){}
		toado(int a, int b ):tung (a), hoanh(b){}
		void set(int a, int b)
		{
			this->tung=a;
			this->hoanh=b;
		}
		
		int gettung ()const
		{
			return this->tung;
			
		}
		int gethoanh()const
		{
			return this->hoanh;
		}
		

};
#endif
