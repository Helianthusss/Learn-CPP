#include <stdio.h>

int main(){
    int n;
    printf("Nhap day cay thong: ");
    scanf("%d",&n);
	for (int i = 0; i < n / 2 + 1; i++){ // max=6
		for (int j = 0;j < n; j++){
			if (j == n /2-i){
				for (int k = n / 2 - i; k <= n / 2 + i; k++){
					printf("*");
				}
			}
			else printf(" ");
		}
		printf("\n");;
	}
	return 0;
}
/* 
    *
   ***
  *****
    */