#include<iostream>
#include<string>
#include "sach.h"
using namespace std;
sach::sach():MSS(0),ten(""),tacgia("")
{
	
}
sach::sach(int ms, string ten, string tacgia)
{
	this->MSS = ms;
	this->ten = ten;
	this->tacgia = tacgia;
}
sach::sach(sach &s)
{
	this->MSS = s.MSS;
	this->ten = s.ten;
	this->tacgia = s.tacgia;
}
sach::~sach()
{
	
}


int sach::get_mss()
{
	return this->MSS;
}

string sach::get_ten()
{
	return this->ten;
}

string sach::get_tacgia()
{
	return this->tacgia;
}
void sach::show()
{
	cout<<this->MSS<<"    "<<this->ten<<"   "<<this->tacgia;
}

