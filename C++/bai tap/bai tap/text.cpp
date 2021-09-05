#include<iostream>
using namespace std;
int main ()
//Viet chuong trinh in ra day so tu begin=10 giam ve end=1
{
	int begin,end,i;
	
	cout<<"Nhap begin; "; cin>>begin;
	cout<<"Nhap end: "; cin>>end;
	
	for(i=end;i>=begin;i--){
	    cout<<i<<"  ";
	}
	return 0;
}