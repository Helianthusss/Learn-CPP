#include<stdio.h>
#include<math.h>
#include<malloc.h>

// nhap mang
void NhapMang(int *a, int n){
	for(int i=0; i<n; i++){
			printf("\nPhan tu thu %d la: ",i+1);
			scanf("%d",&*(a+i));
		}
}
// xuat mang
void XuatMang(int *a, int n){
	for(int i=0; i<n; i++){
			printf("\nPhan tu thu %d la: %d",i+1,*(a+i));
			
		}
}
// cau a
void sapXepMangSoChanGiam(int *a, int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(a+i) % 2 == 0 && *(a+j) % 2 == 0){
                if(*(a+i) < *(a+j)){
                    temp = *(a+i);
					*(a+i) = *(a+j);
					*(a+j) = temp;
                }
            }
        }
        printf("\t%d",*(a+i));
    }
}
bool kiemTraSoCP(int n){
	if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
		if(i*i == n) return true;
	}
	return false;
}
void hienThiSoCPLeMin(int *a, int n){
    int min =0;
    for(int i=0;i<n;i++){
        if(kiemTraSoCP(*(a+i))){
            if(*(a+i) %2 !=0){
                if(min < *(a+i)){
                    min = *(a+i);    
                }
            }
        }
    }
    printf("\n%d",min);
}
int main(){
	int *a;
	int n;
	do{
        printf("\n Nhap n: ");
	    scanf("%d",&n);
		if(n<0 || n>=50)
		    printf("\nNhap lai n!!");
	}while(n<=0 || n>=100);
	a= (int*) calloc(n, sizeof(int));
	NhapMang(a,n);
	XuatMang(a,n);
    printf("\nSap xep mang giam dan theo thu tu so chan\n");
    sapXepMangSoChanGiam(a,n);
    printf("\n Hien thi so chinh phuong le nho nhat");
    hienThiSoCPLeMin(a,n);
    if(a==NULL){
       free(a);
    }
	return 0;
}