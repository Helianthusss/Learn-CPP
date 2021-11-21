// nhập xuất mảng
#include<stdio.h>

void NhapMang(int a[], int n);
void XuatMang(int a[], int n);

int main(){
	int n;
	int a[100];
	do{
        printf("\n Nhap n: ");
	    scanf("%d",&n);
		if(n<=0 || n>=100)
		    printf("\nNhap lai n!!");
	}while(n<=0 || n>=100);
	printf("Nhap mang!!!\n");
	NhapMang(a,n);
	printf("\nXuat mang!!!");
    XuatMang(a,n);
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
// hàm: kiểu dữ liệu< >tên hàm< >khai báo biến