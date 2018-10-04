#include<iostream>
#include<string>
#include "sach.h"
#include "sachtv.h"
#include "thuvien.h"
using namespace std;
int main()
{
	thuvien tv(2);
	cin>>tv;
	cout<<tv;
	tv.muctimkiem();
	
	return 0;
}
