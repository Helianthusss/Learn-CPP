#include<stdio.h>
#include<math.h>

int main()
{
	int  a, b, c, dem=0;
	printf("\n Nhap  3 so nguyen a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
    if(a < 2  || b<2 || c<2) dem = 0;
    if(a ==2 || b ==2 || c ==2) dem ++;
	if(a %2 != 0) dem++;
    if(b %2 != 0) dem++;
    if(c %2 != 0) dem++;    
      
	if(dem!= 0)
	   printf("\n mang co %d so ngto ",dem);
	else
	   printf("\n mang khong co so nto");
}