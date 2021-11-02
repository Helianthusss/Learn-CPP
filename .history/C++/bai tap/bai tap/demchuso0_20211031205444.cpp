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
        tich*=a[i];
    }
    long long dem=0;
    if(tich==0) cout<<"1";
    while(tich>0){ 
        if(tich%10==0) dem ++;
        tich=tich/10;
    }
    cout<<dem;
    return 0;
}