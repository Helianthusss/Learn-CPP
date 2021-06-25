#include<stdio.h>
int main(){
    float r1,r2,r3;
    float tongnt,tongss,tong;
    printf("\nNhap dien tro thu nhat la: ");
    scanf("%f",&r1);
    printf("\nNhap dien tro thu hai la: ");
    scanf("%f",&r2);
    printf("\nNhap dien tro thu ba la: ");
    scanf("%f",&r3);
    tongnt=r1+r2+r3;
    tongss=(1/r1)+(1/r2)+(1/r3);
    tong=tongss+tongnt;
    printf("Tong la: %.2f",tong);
    return 0;
}
