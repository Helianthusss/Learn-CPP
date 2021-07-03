#include <stdio.h>
 
int main(){
    int n;
    do{
    printf("\nNhap n = ");
    scanf("%d", &n);
    if(n<=0)
        printf("\nNhap so khong hop le!!!"); 
    }while(n<=0);
    int i = 0;
    while(i*i <= n){
        if(i*i == n){
            printf("%d la so chinh phuong!\n", n);
            return 0;
        }
        ++i;
    }
    printf("%d khong phai so chinh phuong!\n", n);
}
