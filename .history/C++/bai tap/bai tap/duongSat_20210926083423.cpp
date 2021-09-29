#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,t,s;
    cin >>k>>t;
    s=abs(k-t);
    if(k==1) cout <<k;
    for(int i=0;i<=k;i++){
        if(k==i+s) cout <<i;
    }
}