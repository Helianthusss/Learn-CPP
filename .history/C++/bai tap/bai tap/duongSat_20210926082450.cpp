#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,t;
    cin >>k>>t;
    if(k==1) cout <<k;
    for(int i=0;i<=k;i++){
        if(i==t) cout <<i;
    }
}