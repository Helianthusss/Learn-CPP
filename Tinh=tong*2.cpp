#include<stdio.h>
int main(){
    int i, a,b;
    for(i=10 ; i<100 ; i++){
        a=i%10;
        b=i/10;
        if(a*b==2*(a+b))
            printf("%d\n",i);
    }
}
