//tong s=1/3+1/5+...+1/(2n+1)
#include <stdio.h>
#include<math.h>
int main(){
	int n;
	float s=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	 s=s+1.0/(2*i+1);	
	}
    printf("\nTong la s: %.2f",s);
}
