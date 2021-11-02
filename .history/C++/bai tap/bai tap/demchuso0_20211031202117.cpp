#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long tich=1;
    for(int i=0;i<n;i++){
        tich+=a[i];
    }
    long long dem=0;
    for(int i=0;i<n;i++){
        if(tich%10==0) dem ++;
        tich=tich/10;
    }
    cout<<dem;
    return 0;
}