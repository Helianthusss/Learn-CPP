#include <stdio.h>
#include <math.h>
#define MAX_SIZE 100 

void NhapMang(int arr[], int n);
void XuatMang(int arr[], int n);
bool IsPrime(int n);
int PrimeCount(int a[], int n);
void PrintPrime(int a[], int n);

int main()
{
    int arr[MAX_SIZE];
    int n; 
    do{
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_SIZE);
    NhapMang(arr, n);
    int printCount = PrimeCount(arr,n);
    printf("OUTPUT:\n");
    if(printCount > 0){
        PrintPrime(arr, n);
    }else printf("no primes");
} 
void NhapMang(int arr[], int n){
    int i;
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}

bool IsPrime(int n){
    if (n < 2) return false;
    int i;
    for (i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}
int PrimeCount(int a[], int n){
    int count = 0,i;
    for (i = 0; i < n; i++){
        if (IsPrime(a[i])) count ++;
    }
    return count;
} 
void PrintPrime(int a[], int n){
    int i;
    for (i = 0; i < n; i++){
        if (IsPrime(a[i])){
            printf("%d", a[i]);
            printf(" ");
        }
    }
}
