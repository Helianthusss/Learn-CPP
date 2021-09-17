#include<stdio.h>

int n,i,j;
float c,x[100],y[100],P,L;
int main(){
    
    scanf("%d",&n);
    scanf("%f",&c);
    for(i=0;i<n;i++){
        scanf("%f%f",&x[i],&y[i]);
    }
    P=0;
    for(i=0;i<n;i++){
        L=1;
        for(j=0;j<n;j++){
            if(i!=j){
                L=L*(c-x[j])/(x[i]-x[j]);
            }
        }
        P=P+y[i]*L;
        printf("L=%f\n",L);
    }
    printf("P(%f)=%f",c,P);
    return 0;
}