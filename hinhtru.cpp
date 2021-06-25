#include<stdio.h>
#include<math.h>
int main(){
    float R,h;
    float Sxq,V;
    printf("\nNhap ban kinh cua mat day hinh tru la: ");
    scanf("%f",&R);
    printf("\nNhap chieu cao cua hinh tru la: ");
    scanf("%f",&h);
    V=(3.14)*pow(R,2)*h;
    Sxq=2*(3.14)*R*h;
    printf("Dien tich xung quanh hinh tru la: %.2f",Sxq);
    printf("\nThe tich hinh tru la: %.2f",V);
    return 0;
}
