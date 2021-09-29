#include<stdio.h>
#include<math.h>
#define max 100
int main(){
	int n,a[max],dem=0;
	do{
		printf("Nhap n:");
	    scanf("%d",&n);
	    if(n<1 || n>100)
	        printf("Nhap lai n!!!\n");
	}while(n<1 || n>100);
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	} 
	for(int i=0;i<n;i++){
		if(a[i] %2 !=0 ) dem++;
	}
	if(dem==0) printf("khong co so nguyen to nao ca");
	else printf(" Co %d so nguyen to trong mang",dem);
	return 0;
}
