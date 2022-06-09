#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n < 2){
        printf("\n%d is not a prime number", n);
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        int p = 0;
        int octNumber = 0;
        while(n > 0){
            octNumber += (n % 8) * pow(10, p);
            p++;
            n /= 8;
        };
        printf("%d", octNumber);
    }else{
        printf("\n%d is not a prime number", n);
    }
}
