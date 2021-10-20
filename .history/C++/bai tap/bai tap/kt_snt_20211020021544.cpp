#include <iostream>
#include<math.h>

using namespace std;

bool isPrimeNumber(int n){
	if(n<=2){
		return false;
	}
	int squareRoot= sqrt(n);
	for(int i=2;i<=squareRoot;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(int argc, char** argv) {
	int n,sum=0;
	cout << "\nNhap n: ";
	cin>>n;
	cout<<"\nCac so nguyen to la: ";
	for(int i=0; i<=n;i++){
		if(isPrimeNumber(i))
		    sum+=i;
	}
	cout<<sum;
	return 0;
}

