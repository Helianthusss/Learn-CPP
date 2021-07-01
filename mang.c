#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void nhap (int *a,int n)
{
	int i;
	for(i=0;i<n;i++){
		printf("\nphan tu trong mang %d la :",i);
	    scanf("%d",&*(a+i));
	}
}
void xuat (int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%5d",*(a+i));
}	
int main()
{ 
    int *a,n;
	do{
	printf("\nso phan tu trong mang la :");
	scanf("%d",&n);
	if(n<=0||n>=50)
	   printf("\nNhap lai!");
   }while(n<=0||n>=50);
    a=(int*)malloc(n*sizeof(int));
    nhap(a,n);
    printf("\n mang vua nhap la :");
    xuat(a,n);
    printf("\n");
    free(a);
    getch();
    return 0;
}
