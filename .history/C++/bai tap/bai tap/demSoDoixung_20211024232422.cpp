#include <bits/stdc++.h>
using namespace std;

bool check(long long n){
    float s=sqrt(5*pow(n,2)+4);
    return (s==(int)s);
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
        cout<<count+1<<endl;
    }
    return 0;
}