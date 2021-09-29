#include<stdio.h>
#include<math.h>

int main(){
	float x,sum;
	int n;
	printf("\nNhap n: ");
	scanf("%d",&n);
	printf("\nNhap x: ");
	scanf("%f",&x);
	sum=x;
	for(int i=1;i<=n;i++){
		sum+= pow(float(i+x),3);
	}
	printf("Tong la: %.2f",sum);
}
