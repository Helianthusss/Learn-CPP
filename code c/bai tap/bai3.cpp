#include<stdio.h>
#include<math.h>

int main(){
   int n;
   float s=0;
   printf("\nNhap n:");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       s=s+1.0/i;
   }
   printf("\nTong la: %.2f",s);
   return 0;
}