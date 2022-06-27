#include <stdio.h>
#define MAX_SIZE 100 

void NhapMang(int arr[], int n);
void InsertX(int arr[], int &n, int val, int pos);

int main()
{
    int arr[MAX_SIZE];
    int n; 
    do{
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_SIZE);
    NhapMang(arr, n);
    int pos,val;
    scanf("%d%d",pos,val);
    InsertX(arr,n,val,pos);
    return 0;
} 
void NhapMang(int arr[], int n){
    int i;
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}
void InsertX(int arr[], int &n, int val, int pos){
    n++;
    int i;
    for(i=n-1;i>pos;i--)
        arr[i]=arr[i-1];    
    arr[pos]=val;
    for(i=0;i<=n;i++){
		printf("%d",arr[i]);
        printf(" ");
	}
}


