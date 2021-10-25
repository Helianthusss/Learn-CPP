#include <bits/stdc++.h>
using namespace std;

bool check(long long n){
    int s=sqrt(5*pow(n,2)+4);
    return (s*s==n);
}

int main(){
    int test;
    cin>>test;
    while (test--)
    {
        long long n,a[100],count =0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(check(a[i])) count ++;
        }
        cout<<count<<endl;
    }
    return 0;
}