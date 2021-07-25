#include <iostream>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int isPrimeNumber(int n);

int main(int argc, char** argv) {
	int n;
	cout << "\nNhap n: ";
	cin>>n;
	cout<<"\nCac so nguyen to la: ";
	for(int i=0; i<=n;i++){
		if(isPrimeNumber(i))
		    cout<<i<<" ";
	}
	return 0;
}
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
