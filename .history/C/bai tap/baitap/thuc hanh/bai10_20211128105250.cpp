#include<stdio.h>

int main(){
    int n,dem=0;
    printf("Nhap n: ");scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if((i%3==0 || i%7==0) && i>1 && i<100) dem++;
    }
    printf("\nSo phan tu thoa man la: %d",dem);
    return 0;
}