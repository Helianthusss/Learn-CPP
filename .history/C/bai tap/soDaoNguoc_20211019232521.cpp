#include <stdio.h>
 
int main(){
    int n, tmp;
    scanf("%d", &n);
    int k = 0;
    while(n > 0){
        tmp = n % 10;
        k = k * 10 + tmp;
        n = n / 10;
    }
    printf("%d", k);
}
//1234->4321