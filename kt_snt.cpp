#include <stdio.h>
#include <math.h>
 
int main(){
    int n;
    do{
    printf("\nNhap n = ");
    scanf("%d", &n);
    if(n<=0)
        printf("\nNhap so khong hop le!!!");  
    }while (n<=0);
    if(n < 2){
        printf("\n%d khong phai so nguyen to", n);
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("\n%d la so nguyen to", n);
    }else{
        printf("\n%d khong phai so nguyen to", n);
    }
}
