#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int temp, tich=1;;
    if(a>b){
        temp = a;
        a=b;
        b=temp;
    }
    
    for(int i=a; i<=b;i++){
        if(i%2 != 0) {
            tich = tich *i;
            }
    }
    printf("%d\n", tich);
}
