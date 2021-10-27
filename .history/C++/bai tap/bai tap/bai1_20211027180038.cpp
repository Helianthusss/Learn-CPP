#include<iostream>
using namespace std;

void NhapMang(int a[], int n){
	for(int i=0; i<n; i++){
			cout<<"\na["<<i<<"]= ";
			cin>>a[i];
    }
}
void XuatMang(int a[], int n){
	for(int i=0;i<n;i++){
			cout<<"\na["<<i<<"]="<<a[i];
		}
}
void sapXep(int a[], int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        cout << a[i] <<" ";
    }
}
int main(){
    int a[100] ,n;
    cout<< "\n Nhap n: ";
    cin >> n;
    cout<< "\n Nhap mang!!!";
    NhapMang(a,n);
    cout <<"\n Xuat mang!!!";
    XuatMang(a,n);
    cout << "\n Sap xep mang tang dan!!!\n";
    sapXep(a,n);
    return 0;
}