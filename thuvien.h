#ifndef THUVIEN_H
#define THUVIEN_H
#include<iostream>
#include<string>
#include "sachtv.h"
using namespace std;
class thuvien
{
	private:
		int size;
		sachtv *s;
	public:
		thuvien();
		thuvien(int);
		sachtv& operator[](int);
		thuvien( thuvien&);
		void muctimkiem();
		friend istream& operator>>(istream &, thuvien& );
		friend ostream& operator<<(ostream &, thuvien& );
};
#endif
