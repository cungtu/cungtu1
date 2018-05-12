#ifndef DIEM_H
#define DIEM_H
#include <iostream>
using namespace std;

class Diem
{
protected:
	float x,y;
public:
	void setX(float a)
	{
		this->x = a;
	}
	void setY(float b)
	{
		this->y = b;
	}
	void setdiem(float a, float b)
	{
		this->x = a;
		this->y = b;
	}
	float getX()const
	{
		return this->x;
	}
	float getY()const
	{
		return this->y;
	}
};



#endif // DIEM_H_INCLUDED
