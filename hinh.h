#ifndef HINH_H
#define HINH_H

#include <iostream>
using namespace std;
class hinh
{
	protected:
		int dai ;
		int rong;
		public:
		hinh ():dai(0),rong(0){}
		hinh(int a, int b): dai(a),rong(b){}
		void set(int a, int b){
			this->dai=a;
			this->rong=b;
			
		}
		int getdai ()const
		{
			return this->dai;
		}
		int getrong ()const
		{
		
			return this->rong;
		}
		int  DT(hinh a)
		{
			return (a.dai*a.rong);
		
		}
};
#endif
