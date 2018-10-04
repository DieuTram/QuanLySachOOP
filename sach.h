#ifndef SACH_H
#define SACH_H
#include<iostream>
#include<string>
using namespace std;
class sach
{
	protected:
		int MSS;
		string ten;
		string tacgia;
		
	public:
		sach();
		sach(int, string, string);
		sach(sach  &);
		~sach();
		int get_mss();
		string get_ten();
		string get_tacgia();
		void show();
};
#endif

