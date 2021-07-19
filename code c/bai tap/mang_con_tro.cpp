#include<stdio.h>
#include<stdlib.h>

void NhapMang(int *a, int n);
void XuatMang(int *a, int n);

int main(){
	int *a;
	int n;
	do{
        printf("\n Nhap n: ");
	    scanf("%d",&n);
		if(n<=0 || n>=100)
		    printf("\nNhap lai n!!");
	}while(n<=0 || n>=100);
	a= (int*) calloc(n, sizeof(int));
	NhapMang(a,n);
	XuatMang(a,n);
	free(a);
	return 0;
}
// khai bao con trỏ * + biến
void NhapMang(int *a, int n){
	for(int i=0; i<n; i++){
			printf("\nPhan tu thu %d la: ",i+1);
			scanf("%d",&*(a+i));
		}
}
void XuatMang(int *a, int n){
	for(int i=0; i<n; i++){
			printf("\nPhan tu thu %d la: %d",i+1,*(a+i));
			
		}
}