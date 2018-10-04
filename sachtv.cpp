#include<iostream>
#include<string>
#include "sach.h"
#include "sachtv.h"
using namespace std;

sachtv::sachtv():theloai("")
{
	
}
sachtv::sachtv(int ms, string t, string tg, string tl):sach(ms,t,tg),theloai(tl)
{
	
}
sachtv::sachtv(sachtv &s)
{
	this->MSS = s.MSS;
	this->ten = s.ten;
	this->tacgia = s.tacgia;
	this->theloai = s.theloai;
}
sachtv::~sachtv()
{
	
}
void sachtv::show()
{
	
	cout<<this->MSS<<"    "<<this->ten<<"   "<<this->tacgia<<"   " <<this->theloai<<"\n";
}
string sachtv::get_theloai()
{
	return this->theloai;
}
istream& operator>>(istream &in, sachtv& s)
{
	cout<<"\nMa so sach: ";
	in>>s.MSS;
	cout<<"Ten sach: ";
	in.ignore();
	getline(in,s.ten);
	cout<<"Tac gia: ";
	getline(in,s.tacgia);
	cout<<"The loai sach: ";
	getline(in,s.theloai);
	return in;
}
ostream& operator<<(ostream &o, sachtv& s)
{
	o<<s.MSS<<"    "<<s.ten<<"   "<<s.tacgia<<"   " <<s.theloai<<"\n";
	return o;
}
