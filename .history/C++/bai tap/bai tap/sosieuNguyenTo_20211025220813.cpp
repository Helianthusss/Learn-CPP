#include<bits/stdc++.h>
using namespace std;

bool prime(long long n){
	if(n<2){
		return false;
	}
	long long squareRoot= sqrt(n);
	for(long long i=2;i<=squareRoot;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
bool soSieuNguyenTo(long long n){
    while(n!=0){
        if(prime(n)==false) return false;
        n=n/10;
    }
    return true;
}
int main() {
    long long n;
    cin>>n;
    for(long long i = 1; i <=n;i++){   
        if(soSieuNguyenTo(i)) cout<<i<<" ";
    }
    return 0;
}