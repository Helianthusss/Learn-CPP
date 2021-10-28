#include<stdio.h>
#include<math.h>
int main(){
    int n,s=0;
    printf("\nNhap n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s=s+pow(i,2);
    }
    printf("\nTong la: %d",s);
    return 0;
}