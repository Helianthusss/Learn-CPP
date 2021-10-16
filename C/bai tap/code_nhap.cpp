#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<time.h>

void SetColor(WORD color){ 
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
    WORD wAttributes = screen_buffer_info.wAttributes;
    color &= 0x000f;
    wAttributes &= 0xfff0; wAttributes |= color;
    SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
int main(){
	char a[20],b[20];
	system("cls");
	SetColor(104);
	printf("Nay Sinh nhat ban nao nhi: ");
	gets(a);
	printf("Nhap ngay sinh :");
	gets(a);
	printf("\n========================Tuyet voi ========================>>\n");
	printf("\n-------------------Chuc Mung Sinh Nhat-----------------------\n");
	SetColor(4);
	system("cls");
	for(int i=0;i<=100;i++){
		printf("Dang xu ly %d%%\n",i);
		Sleep(10);
	}
	char s[1000];
	SetColor(102);
	system("cls");
	FILE* f = fopen("anh.txt", "r");
	while (!feof(f)){
		fgets(s, sizeof(s), f);
		printf("%s", s);
		Sleep(50);
	}
	printf("                 Chuc ban tuoi moi that nhieu thanh cong hon, hoc gioi hon nha!!!");
	printf("\n                       Chuc ban mot ngay that nhieu dieu may man nhe");
	printf("\n       Do dich benh nen khong chuc mung sin nhat ban truc tiep duoc mong ban thong cam nha");
	printf("\n ----------------------------------Good luck!!!-----------------------------------------------------");
	return 0;
}
