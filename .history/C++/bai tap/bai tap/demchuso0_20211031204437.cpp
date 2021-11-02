#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long tich=1;
    for(int i=0;i<n;i++){
        tich+=a[i];
    }
    long long x,dem=0;
    while(tich>0){ 
        x=tich%10;
        if(x==0) dem ++;
        tich=tich/10;
    }
    cout<<dem;
    return 0;
}