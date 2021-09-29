#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,t;
    float sd,n;
    cin >>k>>t;
    sd=t%k;
    n=t/k;
    if(sd==0 ) cout <<k;
    else {
    if(n!=0) printf("%.0f",t-k*n);
    else  printf("%.0f",sd);
    }
    return 0;
}
