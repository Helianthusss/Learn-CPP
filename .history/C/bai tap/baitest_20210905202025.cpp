#include<stdio.h>
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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(a+i) % 2 == 0 && *(a+j) % 2 == 0){
                if(*(a+i) < *(a+j)){
                    temp = *(a+i);
					*(a+i) = *(a+j);
					*(a+j) = temp;
                }
            }
        }
    }
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
    sapXepMangSoChanGiam(a,n);
    XuatMang(a,n);
    if(a==NULL){
       free(a);
    }
	return 0;
}