#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,t, s;
    cin >>k>>t;
    s=abs(k-t);
    if(k< t) cout<< s-1;
    else{
    for(int i=0;i<=k;i++){
        if(i==t) cout <<i;
    }
    }
}