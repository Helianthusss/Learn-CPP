// tính tổng
#include<iostream>

using namespace std;

int main(){
    int n,S=0;
	cout<<"Nhap n:";
	cin>>n;
    for (int i=1;i<=n;i++){
    	S = S + i;
	}
    cout<<"\nTong la: "<<S;
	return 0;
}
//i=i+1