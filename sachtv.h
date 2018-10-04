#ifndef SACHTV_H
#define SACHTV_H
#include<iostream>
#include<string>
#include "sach.h"
using namespace std;
class sachtv: public sach
{
	private:
		string theloai;
	public:
		sachtv();
		sachtv(int, string, string, string);
		sachtv(sachtv &);
		~sachtv();
		void show();
		string get_theloai();
		friend istream & operator>>(istream &, sachtv &);
		friend ostream & operator<<(ostream &, sachtv &);
			
};
#endif
