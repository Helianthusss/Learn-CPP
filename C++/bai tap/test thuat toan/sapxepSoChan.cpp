#include<bits/stdc++.h>
using namespace std;

void nhapMang(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void xuatMang(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<"\na["<<i<<"]= "<<a[i];
	}
}
void sapXepSoChan(int a[], int n){
    int temp ;
    cout<<"\n Sap xep mang so chan!!!\n";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n; j++){
            if(a[i]%2==0 && a[j]%2==0){
                if(a[i]>a[j]){
                    temp = a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }  
            }
        }
        cout<<a[i] <<" ";
    } 
}
int main(){
    int a[100],n;
    cout <<"\n Nhap n: ";
    cin >> n;
    nhapMang(a,n);
    xuatMang(a,n);
    sapXepSoChan(a,n);
    return 0;
}