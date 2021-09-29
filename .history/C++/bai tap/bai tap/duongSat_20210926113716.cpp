#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,t,n;
    float sd;
    cin >>k>>t;
    sd=t%k;
    n=t/k;
    if(sd==0 ) cout <<k;
    if(n!=0) printf("%.0f",k-k*n);
    else  printf("%.0f",k*sd);
    return 0;
}
