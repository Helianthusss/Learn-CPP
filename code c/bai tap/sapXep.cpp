#include<stdio.h>

void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void sapXepTang(int a[], int n);

int main(){
	int a[100];
	int n;
	do{
		printf("\nNhhap so luong phan tu: ");
	    scanf("%d",&n);
		if(n<=0 || n>100)
		     printf("\nNhap lai!!!");
	}while(n<=0 || n>100);
	nhapMang(a,n);
	xuatMang(a,n);
	sapXepTang(a,n);
	printf("\nSap xep tang");
	xuatMang(a,n);
	return 0;
}
void nhapMang(int a[], int &n){
	
	printf("\nNhap mang!!!");
	for(int i=0;i<n;i++){
        printf("\na[%d]= ",i);
	    scanf("%d",&a[i]);
	}
}
void xuatMang(int a[], int n){
	printf("\nXuat Mang!!!");
	for(int i=0;i<n;i++){
		printf("\na[%d]= %d",i,a[i]);
	}
}
void sapXepTang(int a[], int n){
	int temp;
	for(int i=0;i< n-1;i++){
		for(int j=i+1;j< n;j++){
			if(a[i]>a[j]){
                temp = a[i];
			    a[i] = a[j];
				a[j] = temp;  
				       
			}
			
		}
	}
}