#include<iostream>

using namespace std;

int ckn(int k, int n){
    if(k==0 || k==n) return 1;
    return ckn(k,n-1)+ckn(k-1,n-1);
}
int main(){
    int k,n;cin>>k>>n;
    cout<<ckn(k,n);
}