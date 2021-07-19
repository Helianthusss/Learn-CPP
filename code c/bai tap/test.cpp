#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>


void NhapMang(int *a,int n);
void XuatMang(int *a,int n);
bool KiemTraSoNT(int n);
void LietKeSoNguyenTo( int *a, int n);
bool KiemTraSoCP(int n);
void LietKeSoChinhPhuong(int *a, int n);
void HoanVi(int *a,int n);
void TangDan(int *a, int n);
void GiamDan(int *a, int n);
void SapXepMangSoChinhPhuongTang(int *a, int n);
void SapXepMangSoNguyenToTang(int *a, int n);
void SapXepMangLeGiam(int *a, int n);
void SapXepMangChanGiam(int *a, int n);

int main(){
	int *a,n;  
    do{
	    printf("nhap so phan tu trong mang : ");
	    scanf("%d",&n);	
    }while(n<0||n>50);
    a=(int*)calloc(n,sizeof(int));
	fflush(stdin);
    NhapMang(a,n);
    XuatMang(a,n);
    printf("\nLiet ke so nguyen to:");
    LietKeSoNguyenTo(a,n);
    printf("\nLiet ke so chinh phuong:");
    LietKeSoChinhPhuong(a,n);
    printf("\n Xuat mang tang:");
    TangDan(a,n);
    XuatMang(a,n);
    printf("\n Xuat mang giam:");
    GiamDan(a,n);
    XuatMang(a,n);
    printf("\n Liet ke mang so chinh phuong tang:");
    SapXepMangSoChinhPhuongTang(a,n);
    XuatMang(a,n);
    printf("\n Liet ke mang so nguyen to tang:");
    SapXepMangSoNguyenToTang(a,n);
    XuatMang(a,n);
    printf("\n Liet ke mang so le giam:");
    SapXepMangLeGiam(a,n);
    XuatMang(a,n);
    printf("\n Liet ke mang so chan giam:");
    SapXepMangChanGiam(a,n);
    XuatMang(a,n);
    free(a);
    return 0;
}
void NhapMang(int *a, int &n){
	for(int i=0; i<n; i++){
			printf("\nPhan tu thu %d la: ",i+1);
			scanf("%d",&*(a+i));
		}
}
void XuatMang(int *a, int n){
	for(int i=0; i<n; i++){
			printf("\nPhan tu thu %d la: %d",i+1,*(a+i));
			
		}
}
bool KiemTraSoNT(int n){
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
void LietKeSoNguyenTo(int *a, int n)
{
    for (int i = 0; i < n; i++){
        if (KiemTraSoNT(*(a+i))){
            printf("\t%d",*(a+i));
        }
    }
} 
bool KiemTraSoCP(int n)
{
	int i;
	for(i=1;i<=n;i++)
	if(i*i==n)
		return true;
	return false;
}
void LietKeSoChinhPhuong(int *a, int n)
{
    for (int i = 0; i < n; i++){
        if (KiemTraSoCP(*(a+i))){
            printf("\t%d",*(a+i));
        }
    }
} 
void HoanVi(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}
void TangDan(int *a, int n)
{
    int i,j;
    for( i = 0; i < n - 1; i++){
        for( j = i + 1; j < n; j++){
        	if(*(a+i) > *(a+j))
        	    HoanVi((a+j),(a+j));  
		}
    }                
}
void GiamDan(int *a, int n)
{
    int i,j;
    for( i = 0; i < n - 1; i++){
        for( j = i + 1; j < n; j++){
        	if(*(a+i) < *(a+j))
        	    HoanVi((a+j),(a+j));  
		}
    }                
}

void SapXepMangSoChinhPhuongTang(int *a, int n)
{
	int i,j;
	for(i= 0 ; i< n - 1; i++)
		for(j= i + 1 ;j < n; j++)
			if(KiemTraSoCP(*(a+i)))
				HoanVi((a+j),(a+j));
}

void SapXepMangSoNguyenToTang(int *a, int n)
{
	int i,j;
	for(i= 0 ; i< n - 1; i++)
		for(j= i + 1 ;j < n; j++)
			if(KiemTraSoNT(*(a+i)))
				HoanVi((a+j),(a+j));
}
void SapXepMangLeGiam(int *a, int n){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; i++)
		{
			if(*(a+i)%2!=0 && *(a+j)%2!=0 && *(a+i)<*(a+j))	
			  HoanVi((a+j),(a+j));
		}
	}		
}

void SapXepMangChanGiam(int *a, int n){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; i++)
		{
			if(*(a+i)%2==0 &&*(a+j)%2==0 && *(a+j)<*(a+j))
			    HoanVi((a+j),(a+j));
		}
	}		
}
