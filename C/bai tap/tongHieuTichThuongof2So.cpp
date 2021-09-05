#include<stdio.h>
#include<math.h>

int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);

int main(){
	int a,b;
	printf("\nNhap a: ");
	scanf("%d",&a);
	printf("\nNhap b: ");
	scanf("%d",&b);
	printf("\nTong la: %d",tong(a,b));
	printf("\nHieu la: %d",hieu(a,b));
	printf("\nTich la: %d",tich(a,b));
	float kq= thuong(a,b);
	printf("\nThuong la: %.2f",kq);
	return 0;
}
int tong(int a, int b){
    return a+b;
}
int hieu(int a, int b){
    return a-b;
}
int tich(int a, int b){
    return a*b;
}
float thuong(int a, int b){
	float T=0;
	if(a != 0 && b!= 0){
        T= float(a)/b;
	}
    return T;
}