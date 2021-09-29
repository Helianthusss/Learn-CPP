#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,t,n;
    float sd;
    cin >>k>>t;
    sd=t%k;
    n=t/k;
    if(n==2) cout<<"0";
    else if(n==1 && sd==0) cout<<k;
    else if(n==0 && sd !=0) print("%.0f",k*sd);
  //  else if(n==1 && sd !=0)
 //   printf("%.1f",sd);
    return 0;
}
    