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
		return 1;}
	return 0;   
}
void htcp(int *a, int n)
{
	int i;
	printf("\n Mang so chinh phuong la:");
	for( i=0; i<n;i++){
		if(ktcp(*(a+i)))
		    printf("\t%d",*(a+i));  
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
void sxtangdan(int *a, int n)
{
	printf("\n mang sx tang dan la :");
	int i,j, temp;
	for(i=0; i<n-1 ;i++){
		for(j=i+1;j<n; j++ ){
		   if(*(a+i)>*(a+j)){
		      temp = *(a+i);
		      *(a+i) = *(a+j);
		      *(a+j) = temp;
			}
		}
	}	
}
void max(int *a, int n){
	int max=*(a+0);//a[0] =*a
	for(int i=0;i<n;i++){
		if(max <*(a+i)) max = *(a+i);
	}
	printf("\nSo lon nhat la: %p",max);
}
int main()
{
	int *a,n;
	printf("\n so ptu cua mang la :");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	nhap(a,n);
	xuat(a,n);
//	tong(a,n);
//	htcp(a,n);
//	sxtangdan(a,n);
//	xuat(a,n);	
	max(a,n);
	free(a);
}
