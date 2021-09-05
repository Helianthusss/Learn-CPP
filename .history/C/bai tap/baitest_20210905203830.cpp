#include<stdio.h>
#include<math.h>

bool lasoNguyenTo(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
	int n, a, b, c, dem=0;
	printf("\n Nhap  3 so nguyen a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	if(lasoNguyenTo(a)) dem++;
    if(lasoNguyenTo(b)) dem++;
    if(lasoNguyenTo(c)) dem++;    
      
	if(dem!= 0)
	   printf("\n mang co so ngto la: %d",dem);
	else
	   printf("\n mang khong co so nto");
}