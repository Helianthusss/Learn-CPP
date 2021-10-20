#include <stdio.h>
#include <conio.h>

int main(){
    int n;
    scanf("%d",&n);
	for (int i = 0; i < n / 2 + 1; i++)
	{
		for (int j = 0;j < n; j++)
		{
			if (j == n / 2 - i)
			{
				for (int k = n / 2 - i; k <= n / 2 + i; k++)
				{
					printf("*");
				}
			}
			else
				printf(" ");
		}
		printf("\n");;
	}
	return 0;
}
/* 
    *
   ***
  *****
    */