#include<iostream>
#include<string>
#include "sach.h"
#include "sachtv.h"
#include "thuvien.h"
using namespace std;
thuvien::thuvien()
{
	this->size = 0;
	this->s = NULL;
}

thuvien::thuvien(int size)
{
	this->size = size;
	this->s = new sachtv[this->size];
}

sachtv& thuvien::operator[](int i)
{
	static sachtv tam;
	return (i >= 0 && i < this->size ) ? this->s[i] : tam;
}

thuvien::thuvien(thuvien &tv)
{
	this->size = tv.size;
	this->s = tv.s;
}

void thuvien::muctimkiem()
{
	int c;
	int ms,kt = 0;
	string timkiem;
	cout<<"\nBan muon tim muc nao: \n";
	cout<<"1.Ma so sach\n";
	cout<<"2.Ten sach\n";
	cout<<"3.Tac gia\n";
	cout<<"4.The loai\n";
	cout<<"5.Thoat\n";
	cout<<"\n---->Chon muc: ";
	cin>>c;
	if(c == 2 || c == 3 || c == 4)  
	{
		cout<<"Ten ban muon tim: "; 
			cin.ignore();
			getline(cin,timkiem);
	}
	
	switch(c)
	{
		case 1:
			{
				cout<<"Ma so sach ban muon tim: ";  cin>>ms;
				for(int i = 0; i < this->size; i++)
				{
					if((*this)[i].get_mss() == ms) 
					{
						kt = 1;
						cout<<(*this)[i];
					} 	
				}
				if(kt == 0) cout<<"khong tim thay du lieu";
				break;
				
			}
		case 2:
			{
				
				for(int i = 0; i < this->size; i++)
				{
					if((*this)[i].get_ten() == timkiem)
					{
						kt = 1;
						cout<<(*this)[i];
					}
				if(kt == 0) cout<<"khong tim thay du lieu";
				break;
				}
			}
		case 3:
			{
				
				for(int i = 0; i < this->size; i++)
				{
					if((*this)[i].get_tacgia() == timkiem)
					{
						kt = 1;
						cout<<(*this)[i];
					}
				if(kt == 0) cout<<"khong tim thay du lieu";
				break;
				}
			}
		case 4:
			{
				
				for(int i = 0; i < this->size; i++)
				{
					if((*this)[i].get_theloai() == timkiem)
					{
						kt = 1;
						cout<<(*this)[i];
					}
				if(kt == 0) cout<<"khong tim thay du lieu";
				break;
				}
			}
		case 5:
			break;
		default:
		{
			cout<<"Ban khong chon muc nao";
			break;
		}
			
	}
}




istream& operator>>(istream &in, thuvien& tv)
{
	for(int i = 0; i < tv.size; i++)
	{
		cout<<"nhap sach thu "<<i+1<<": ";
		in>>tv[i];
	}
	return in;
}
ostream& operator<<(ostream &o, thuvien& tv)
{
	for(int i = 0; i < tv.size; i++)
	{
		
		o<<tv[i];
	}
	return o;
}


