#include<stdio.h>
#include<math.h>
#define max 100
int main(){
	int n,a[max],dem=0;
	printf("Nhap n:");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	} 
	if(a[i] <=1) dem =0;
	for(i=0;i<=sqrt(n);i++){
		if(a[i] %i !=0 ) dem ++;
	}
	printf(" Co %d so nguyen to trong mang",dem);
	return 0;
}
//a[1]= 3
