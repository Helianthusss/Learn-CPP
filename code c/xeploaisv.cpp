#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct SinhVien{
    char hoten[30];
    float dtb;
    char xeploai[20];
};
void inPutStudent(SinhVien *sv);
void outPutStudent(SinhVien *sv);
void rankStudent(SinhVien *sv);
int main(){
    SinhVien *sv;
    sv = (SinhVien*)malloc(sizeof(SinhVien));
    inPutStudent(sv);
    outPutStudent(sv);
    rankStudent(sv);
    if(sv == NULL)
    free(sv);
}
void inPutStudent(SinhVien *sv){
	fflush(stdin);
    printf("\nHo va ten sinh vien: ");
    gets(sv->hoten);
    printf("\nDiem trung binh: ");
    scanf("%f",&sv->dtb);
}
void rankStudent(SinhVien *sv){
    if(sv->dtb >= 9){
        strcpy (sv->xeploai,"Xuat sac");
        printf("\nXep loai: %s",sv->xeploai);
    }
    else if(sv->dtb >= 8 && sv->dtb < 9){
        strcpy (sv->xeploai,"Gioi");
        printf("\nXep loai: %s",sv->xeploai);
    }
    else if(sv->dtb >= 7 && sv->dtb < 8){
        strcpy (sv->xeploai,"Kha");
        printf("\nXep loai: %s",sv->xeploai);
    }
    else if(sv->dtb >= 6 && sv->dtb < 7){
        strcpy (sv->xeploai,"Trung binh kha");
        printf("\nXep loai: %s",sv->xeploai);
    }
    else if(sv->dtb >= 5 && sv->dtb < 6){
        strcpy (sv->xeploai,"Trung binh");
        printf("\nXep loai: %s",sv->xeploai); 
    }
    else{
        strcpy (sv->xeploai,"Yeu");
        printf("\nXep loai: %s",sv->xeploai);
    }
}
void outPutStudent(SinhVien *sv){
    printf("\nHo va ten sinh vien: %s",sv->hoten);
    printf("\nDiem trung binh: %.2f",sv->dtb);
    
}
