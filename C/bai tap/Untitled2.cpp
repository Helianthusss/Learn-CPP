#include<stdio.h>
#include<math.h>
#include<malloc.h>
void nhap(int *a, int n)
{
	int i;
	for(i=0; i<n; i++){
		printf("\n nhap phan tu thu %d la :",i);
		scanf("%d",&*(a+i));
	}
}
void xuat(int *a, int n)
{
	int i;
	for(i=0; i<n; i++)
	   printf("%5d",*(a+i));
}
int ktcp(int n)
{
	int i;
	 if(n<2)
	    return 0;
	for(i=2; i<n; i++){
		if(n==i*i)
		return 1;
	return 0;   }
}
void htcp(int *a, int n)
{
	int i;
	printf("\n Mang so chinh phuong la:");
	for( i=0; i<n;i++){
		if(ktcp(*(a+i)))
		    printf("%d",*(a+i));  \
    }
}	
void tong(int *a, int n)
{
	int i , tong =0;
	   for(i=0 ;i<n ;i++){
	   	  tong= tong +*(a+i);
	   	}
	printf("\n tong mang la :%d",tong);
}
int main()
{
	int *a,n;
	printf("\n so ptu cua mang la :");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	nhap(a,n);
	xuat(a,n);
	tong(a,n);
	htcp(a,n);	
	free(a);
}

