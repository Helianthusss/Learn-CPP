#include<stdio.h>

int main(){
    float a,b;
    do{
        printf("Enter a: ");
        scanf("%f",&a);
        printf("Enter b: ");
        scanf("%f",&b);
        if(a<0 || b<0) printf("It doesn't count'");
    }while(a<0 || b<0);
    printf("\nPerimeter: %.2f",(a+b)*2);
    printf("\nArea: %.2f",a*b);
    return 0;
}
