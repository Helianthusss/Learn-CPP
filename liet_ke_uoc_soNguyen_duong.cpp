#include<stdio.h>
int main(){
    int n;
    do{
    printf("\nNhap n(n > 0): ");
    scanf("%d", &n);
      if(n <= 0)
       {
        printf("\n N phai > 0. Xin nhap lai !");
       }
    }while(n <= 0);

    for(int i=1;i<=n;i++){
    	if(n % i == 0)
            printf("%4d", i);
	}
    return 0;
}
