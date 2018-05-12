#include<iostream>
using namespace std;
#include "HinhCN.h"

int main()
{
	HinhCN a;
	HinhCN b;
	HinhCN c;
	a.Nhap();
	b.Nhap();
	c = a + b;
	c.Xuat();
}
