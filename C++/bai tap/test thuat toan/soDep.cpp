#include<bits/stdc++.h>
using namespace std;

int tinhSoDep(int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=pow(3,i);
    }
    return sum;
}
int kiemtra(long n){
    if(n==1) return 1;
    int i=0;
    while(i<= n){
        if(i==tinhSoDep(n)) return 1;
        i++;
    }
    return 0;
}

int main(){
    int n,a[100]
}