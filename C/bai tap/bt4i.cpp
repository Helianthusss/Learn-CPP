#include<stdio.h>
#define MAX_SIZE 100 

void NhapMang(int a[], int n);
void InsertX(int a[],int b[], int n, int val, int pos);
int main(){
    int a[MAX_SIZE], b[MAX_SIZE];
    int n; 
    do{
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_SIZE);
    NhapMang(a, n);
    int pos,val;
    scanf("%d",pos);
    scanf("%d",val);
    InsertX(a,b,n,pos,val);
}
void NhapMang(int a[], int n){
    int i;
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}
void InsertX(int a[],int b[], int n, int pos, int val){  
    int i,j;
    for (i = 0; i < pos-1; i++) b[i] = a[i];
    b[pos-1] = val;
    for (j = i; j < n; j++){
        pos++;
        b[pos-1] = a[j];
    }
    for (i = 0; i < n + 1; i++) a[i] = b[i];
    printf("OUTPUT:\n");
    for (i = 0; i < n + 1; i++) {
        printf("%d",a[i]);
        printf(" ");
    }
}