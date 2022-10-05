#include<stdio.h>
#include<conio.h>



// nhap roi in ra n
/* 
nhap roi in ra n
*/

int main(){
	int x,y,a,b;
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("Nhap y: ");
	scanf("%d",&y);
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
//	printf("Tong la: %d",x+y);
//	printf("\nHieu la: %d",x-y);
//	printf("\nTich la: %d",x*y);
//	float thuong = float(x)/y;
//	printf("\nThuong la: %.2f",thuong);
	if(x < y || a < b) {
		printf("y va b la 2 so lon hon");
	}
	else{
		printf("x va a la 2 so lon hon");
	}
//	x < y ? x=1: y=1;
//	printf("x= %d",x);
//	printf("\ny= %d",y);
 
    return 0;
}
