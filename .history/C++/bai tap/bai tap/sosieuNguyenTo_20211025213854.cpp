#include<stdio.h>
#include<math.h>
int n, a[4] = { 1, 3, 7, 9 };

bool prime(int n){
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
void helper(int n, int s) {
    if (int(log10(s)) + 1 == n)
        printf("%d\n", s);
    else
        for (int i = 0; i < 4; i++) {
            int t = s * 10 + a[i];
            if (prime(t)) // kiem tra t co phai la nguyen to k
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