#include <stdio.h>
 
int main(){
    int n, tmp;
    scanf("%d", &n);
    int k = 0;
    while( > 0n){
        tmp = n % 10;//chia lay du
        k = k * 10 + tmp;
        n = n / 10;//chia lay nguyen
    }
    printf("%d", k);
}
//1234->4321