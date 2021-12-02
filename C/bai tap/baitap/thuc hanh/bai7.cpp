#include<stdio.h>

int main(){
    int n,dem=0;
    printf("Nhap n: ");scanf("%d",&n);
    float x,y;
    printf("\nNhap x: ");scanf("%f",&x);
    printf("\nNhap y: ");scanf("%f",&y);
    for(int i=1;i<=n;i++){
        if(i%5==2 && i>=x && i<=y) dem++;
    }
    printf("\nSo phan tu thoa man la: %d",dem);
    return 0;
}