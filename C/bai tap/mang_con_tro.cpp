#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void NhapMang(int *a, int n);
void XuatMang(int *a, int n);
void sapXepTangDanSoAM(int *a,int n);
void print(int *a, int n);

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
	sapXepTangDanSoAM(a,n);

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
bool kiemTraSoCP(int n){
	if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
		if(i*i == n) return true;
	}
	return false;
}
a[i] = *(a+i)
void lietKeSoCP(int *a, int n){
	printf("\n Mang so chinh phuong la:");
	for(int i=0; i<n;i++){
		if(kiemTraSoCP(*(a+i)))
		    printf("%d",*(a+i));
	}
}
void sapXepTangDanSoAM(int *a,int n){
	int temp , i = 0;
	printf("\nXuat day am tang dan:");
	if (*(a+i)<0){
		for(int i=0;i< n-1;i++){
		    for(int j=i+1;j< n;j++){
			    if(*(a+i)>*(a+j)){
					temp = *(a+i);
					*(a+i) = *(a+j);
					*(a+j) = temp;  			       
			    }
		    }
			printf("%d\t",*(a+i));
	    }
	}	
}
