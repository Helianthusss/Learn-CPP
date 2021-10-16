#include<stdio.h>
#include<windows.h>
int main()
	{
	char a[20],b[20];
	printf("ghi ten vao di nao :");
	gets(a);
	printf("Nhap ngay sinh :");
	gets(a);
	printf("Chuc mung sinh nhat nhe!!!");
	printf("\nTuyet voi =>>\n");
	for(int i=0;i<=100;i++){
	printf("Dang xu ly %d%%\n",i);
	Sleep(10);
	}
	char s[1000];
	FILE* f = fopen("cmsn.txt", "r");
	while (!feof(f)){
	fgets(s, sizeof(s), f);
	printf("%s", s);
	Sleep(50);
	}
}
