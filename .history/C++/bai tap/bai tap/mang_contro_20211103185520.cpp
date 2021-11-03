// nhập xuất mảng
#include<iostream>
#include<stdlib.h>

using namespace std;

void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
int main(){
	int n;
	int *a;
	a=new int;
	do{
        cout<<"\n Nhap n: ";
		cin>>n;
		if(n<=0 || n>=100)
		    cout<<"\nNhap lai n!!";
	}while(n<=0 || n>=100);
	cout<<"Nhap mang!!!\n";
	NhapMang(a,n);
	cout<<"\nXuat mang!!!";
    XuatMang(a,n);
	delete(a);
}
void NhapMang(int *a, int n){
	for(int i=0; i<n; i++){
			cout<<"\nPhan tu thu"<< i+1 <<"la: ";
			cin>>*(a+i);
		}
}
void XuatMang(int *a, int n){
	for(int i=0;i<n;i++){
			cout<<"\nPhan tu thu"<< i+1 <<"la: "<<*(a+i);
		}
}