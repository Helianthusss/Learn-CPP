#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,t,n;
    float sd;
    cin >>k>>t;
    sd=t % k;
   n=t/k;
   cout << sd<<endl;
    if(n!=0) printf("%.0f",k-n*sd);
    else  printf("%.0f",sd);
    return 0;
}
