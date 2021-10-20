#include<stdio.h>

int main(){
   int n;
   printf("Nhap chieu cao: ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       printf("*");
       if(i%2 != 0) printf("\n");
   }
}
/* 
    *
   ***
  *****
    */