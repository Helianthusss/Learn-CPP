
#include<stdio.h>
#include<math.h>
using namespace std;
struct Point{
    float x, y;
};
void nhap(Point *a){
    printf("\nNhap hoanh do: "); scanf("%f",&a->x);
    printf("\nNhap tung do: "); scanf("%f",&a->y);
}
void nhapDanhSach(Point *a, int n){
    for(int i=0; i<n; i++){
        printf("Nhap toa do diem thu %d: ",i+1);
        nhap(&*(a+i));
    }
}
void xuat(Point *a){
    printf("(%f,%f); ",a->x,a->y);
}

void xuatDanhSach(Point *a, int n){
    for(int i=0; i<n;i++){
        xuat((a+i));
    }
    printf("\n");
}
void tong(Point *a, int n){
    float sum=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            sum+=sqrt(pow((a+i)->x-(a+j)->x,2)+pow((a+i)->y-(a+j)->y,2));
        }
    }
    printf("\nDo dai duong gap khuc la: %f",sum);
}
void max(Point *a, int n){
    int i;
    float max=sqrt(pow((a+1)->x-(a+0)->x,2)+pow((a+1)->y-(a+0)->y,2));
    for(i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(max < sqrt(pow((a+i)->x-(a+j)->x,2)+pow((a+i)->y-(a+j)->y,2))){
                max=(a+i);
            }
        }
    }
    printf("\nDoan M%dM%d la doan co do dai lon nhat",i,i+1);
}
int main(){
    int n;
    printf("\nNhap n: ");scanf("%d",&n);
    Point *a=calloc(n,sizeof(Point));
    nhapDanhSach(a,n);
    xuatDanhSach(a,n);
    tong(a,n);
    max(a,n);
    free(a);
}