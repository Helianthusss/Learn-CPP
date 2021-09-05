#include <iostream>
#include<math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void tong(int a[], int n){
	int sum =0;
	for(int i=0;i<n;i++){
		sum +=a[i];// sum=sum+a[i];
	}
	cout<<"\nTong la: "<<sum;
}
bool kiemTraSoCP(int n){
	if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
		if(i*i == n) return true;
	}
	return false;
}
void lietKeSoCP(int a[], int n){
	cout<<"\nCac so chinh phuong la: ";
	for(int i=0; i<n;i++){
		if(kiemTraSoCP(a[i]))
		    cout<<a[i]<<" ";
	}
}
void sapXep(int a[], int n){
	int temp;
	for(int i=0;i<n;i++){
		if(a[i]>a[i+1]){
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
		cout<<a[i]<<" ";
	}
	
}
int main(int argc, char** argv) {
	int a[5]={5,4,16,1,3};
	tong(a,5);
	lietKeSoCP(a,5);
	sapXep(a,5);
	
	return 0;
}
