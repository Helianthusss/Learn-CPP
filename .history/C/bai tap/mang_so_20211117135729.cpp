#include<stdio.h>

void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
void Max(int a[], int n);

int main(){
	int n;
	int a[100];
	do{
        printf("\n Nhap n: ");
	    scanf("%d",&n);
		if(n<=0 || n>=100) printf("\nNhap lai n!!");
	}while(n<=0 || n>=100);
	printf("Nhap mang!!!\n");
	NhapMang(a,n);
	printf("\nXuat mang!!!");
    XuatMang(a,n);
	Max(a,n);
	return 0;
}
void NhapMang(int a[], int n){
	for(int i=0; i<n; i++){
			printf(" a[%d]= ",i);
			scanf("%d",&a[i]);
		}
}
void XuatMang(int a[], int n){
	for(int i=0;i<n;i++){
			printf("\na[%d]= %d",i,a[i]);
		}
}
void Max(int a[], int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]) max = a[i];
	}
	printf("\nSo lon nhat la: %d",max);
}
