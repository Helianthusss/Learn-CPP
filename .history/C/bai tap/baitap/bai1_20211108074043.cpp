#include<stdio.h>

int main(){
    float a,b;
    do{
        printf("Enter a: ");
        scanf("%f",&a);
        printf("Enter b: ");
        scanf("%f",&b);
        if(a<0 || b<0) printf("khong tinh duoc");
    }while(a<0 || b<0);
    printf("\nChu vi: %f",(a+b)/2);
    printf("\nDien tich: %f",a*b);
    return 0;
}