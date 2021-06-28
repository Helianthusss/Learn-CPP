#include<stdio.h>
#include<conio.h>
int main(){
    int N,Ngoc,i,tong=0,tich=1;
    do{
        printf("N=");
        scanf("%d",&N);
        if(N<10 && N>99)
            printf("Gia tri cua N khong hop le.Xin moi nhap lai.\n");
    }
    while(N<10 && N>99);
    Ngoc=N;
    while(N!=0)
    {
        i=N%10;
        tong=tong+i;
        tich=tich*i;
        N=N/10;
    }
    if(tich==2*tong)
        printf("%d la gia tri can tim",Ngoc);
    else 
        printf("%d khong phai gia tri can tim",Ngoc);
    getch();
}
