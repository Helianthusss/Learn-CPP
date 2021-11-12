#include<iostream>
#include<string.h>
using namespace std;
void nhapMang1 (char a[], int &n)
{
    cout<<"Nhap so ki tu: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"nhap ki tu "<<i<<": ";
        cin>>a[i];
    }
}
void xuatMang1 (char a[], int n)
{
    for(int i=0; i<n ;i++){
        cout<<a[i];}
}
void nhapMang2 (char b[], int &m)
{
    cout<<"\nNhap so ki tu: ";
    cin>>m;
    for(int j=0; j<m; j++){
        cout<<"nhap ki tu "<<j<<": ";
        cin>>b[j];
    }
}
void xuatMang2 (char b[], int m)
{
    for(int j=0; j<m ;j++){
        cout<<b[j];}
}
void dem(char a[],char b[],int m, int n)
{
    int dem=0, dem2=0;
    for(int i=0; i<strlen(a) ; i++){
        if (a[i] == b[0]){
            for(int j=0 ; j<strlen(b) ; j++){
                if (a[i+j] == b[j]) dem++;
			} 
			if(dem == strlen(b)) dem2++;
        }
	}
    cout<<"Find: "<<dem2;
}
int main()
{
    char b[100];
    char a[100];
    int n;
    int m;
    nhapMang1(a,n);
    xuatMang1(a,n);
    nhapMang2(b,m);
    xuatMang2(b,m);
    cout<<endl;
    dem(a,b,m,n);
}
