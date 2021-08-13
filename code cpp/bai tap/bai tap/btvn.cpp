#include<bits/stdc++.h>
#define max 100
using namespace std;

void nhapMang(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void xuatMang(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "<<a[i]<<endl;
	}
}
// kiem tra so nguyen to

bool kiemTraSoNt(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void lietKeSoNT(int a[], int n){
	cout<<"\n Mang so nguyen to la:";
	for(int i=0; i<n;i++){
		if(kiemTraSoNt(a[i]))
		    cout<<a[i]<<" ";
	}
}
// kiem tra so chinh phuong
bool kiemTraSoCP(int n){
	if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
		if(i*i == n) return true;
	}
	return false;
}
void lietKeSoCP(int a[], int n){
	cout<<"\n Mang so chinh phuong la:";
	for(int i=0; i<n;i++){
		if(kiemTraSoCP(a[i]))
		    cout<<a[i]<<" ";
	}
}
// mang tang
void sapXepMangTang(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j =i+1;j<n;j++){
			if(a[i] > a[j]){
				int temp =a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
// mang giam
void sapXepMangGiam(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j =i+1;j<n;j++){
			if(a[i] < a[j]){
				int temp =a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void sapXepGiam(int a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]<a[i+1]){
			int temp =a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
	}
}
int main(){
	int a[max], n;
	do{
		cout<<"\n Nhap n: ";
		cin>> n;
        if(n<=0)
		    cout<<"Nhap lai!!!";
	}while(n<=0);
	cout<<"Nhap mang\n";
    nhapMang(a,n);
	cout<<"Xuat mang\n";
	xuatMang(a,n);
	lietKeSoNT(a,n);
	lietKeSoCP(a,n);
	cout<<"\nXuat mang tang\n";
	sapXepMangTang(a,n);
	xuatMang(a,n);
	cout<<"\nXuat mang giam\n";
	sapXepMangGiam(a,n);
	xuatMang(a,n);
	return 0;
}