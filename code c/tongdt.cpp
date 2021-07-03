#include<stdio.h>
#include<math.h>
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
    tongss=(r1*r2*r3)/(r1*r2+r2*r3+r1*r3);
    tong=tongss+tongnt;
    printf("Tong la: %.2f",tong);
    return 0;
}
