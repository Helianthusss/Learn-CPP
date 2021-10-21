#include<stdio.h>

int main(){
    int n;
    float c,x[100],y[100],P,L;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Nhap c: ");
    scanf("%f",&c);
    for(int i=0;i<n;i++){
        printf("Nhap x[%d],y[%d] ",i,i);
        scanf("%f%f",&x[i],&y[i]);
    }
    P=0;
    for(int i=0;i<n;i++){
        L=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                L=L*(c-x[j])/(x[i]-x[j]);
            }
        }
        P=P+y[i]*L;
        printf("L-%f \n",L);
    }
    printf("P(%f)- %f",c,P);
}