#include<iostream>
using namespace std;

int main(){
    long long k,t s,dem=0;
    cin >>k>>t;
    s=abs(k-t);
    for(int i=0;i<=k;i++){
        dem++;
        if(dem=s) cout <<i;
    }
}