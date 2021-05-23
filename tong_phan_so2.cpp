//tong s=1/2+1/4+...+1/2n
#include <stdio.h>
#include<math.h>
int main(){
	int n;
	float s=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	 s=s+1.0/(2*i);	
	}
    printf("\nTong la s: %.2f",s);
}
