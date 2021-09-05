#include <bits/stdc++.h>
using namespace std;
int n, a[4] = { 1, 3, 7, 9 };

int isPrimeNumber(int n){
	if(n<2){
		return 0;
	}
	int squareRoot= sqrt(n);
	for(int i=2;i<=squareRoot;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int KiemTra(int n){
	if(n>0){
		int sd=n%2;
        if(isPrimeNumber(sd)) return 1;
		n=n/2;
		KiemTra(n);
	}
    return 0;
}
int main() {
    int n,a,b;
    int dem =0;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin  >> a >> b;
    }
    for(int i=a;i<b;i++) {
        if(isPrimeNumber(i) && KiemTra(i)) dem ++;
    }
    cout << dem;
}