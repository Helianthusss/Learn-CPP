#include<stdio.h>

void nhapMang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
}
void xuatMang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("a[%d]= %d\t",i,a[i]);
	}
}
void sapXepTangDanSoAm(int a[], int n){
	int temp,i ;
	if(a[i] < 0){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i] > a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
	    }
	}
}
void sapXepGiamDanSoDuong(int a[], int n){
    int temp,i;
	if(a[i]> 0){
        for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i] < a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
	    }
	}	
}
int main(){
	int a[100],n;
	printf("\n Nhap n: ");
	scanf("%d",&n);
	nhapMang(a,n);
    xuatMang(a,n);
	printf("\n sap xep mang so am tang dan: ");
	sapXepTangDanSoAm(a,n);
	printf("\n");
	xuatMang(a,n);
	printf("\n sap xep mang so duong giam dan: ");
	sapXepGiamDanSoDuong(a,n);
	printf("\n");
	xuatMang(a,n);
	return 0;
}