#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,t;
    float sd,n;
    cin >>k>>t;
    sd=t%k;
    n=t/k;
 /*   if(n==2 && sd==0) cout<<"0";
    else if(n==2 && sd!=0) printf("%.0f",sd-1);
    else if(n==1 && sd==0) cout<<k;
    else if(n==0 && sd !=0) printf("%.0f",sd);
    else  printf("%.0f",k-sd);*/
    if(sd==0 ) cout <<k;
    else {
    if(n!=0 && sd !=0) printf("%.0f",t-k*n);
    else  printf("%.0f",k-sd);
    return 0;
}
