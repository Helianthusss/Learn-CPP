#include<bits/stdc++.h>
using namespace std;

int n, a[6] = { 1,2, 3,5, 7, 9 };

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
void helper(int n, int s) {
    if (int(log10(s)) + 1 == n)
        printf("%d\n", s);
    else
        for (int i = 0; i < 6; i++) {
            int t = s * 10 + a[i];
            if (isPrimeNumber(t))
                helper(n, t);
        }
}
int main() {
    n = 8;
    helper(n, 2);
    helper(n, 3);
    helper(n, 5);
    helper(n, 7);
}