#include <bits/stdc++.h>
#define run() int T; cin>>T; cin.ignore(); while(T--)
using namespace std;

bool check(long long n){
    float s=sqrt(5*pow(n,2)+4);
    float s1=s=sqrt(5*pow(n,2)-4);
    return (s==(int)s) || (s1==(int)s1);
}

int main(){
    run(){
        int n;  cin>>n;
        vector<int>a(n);
        for(auto &i : a)    cin>>i;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(check(a[i])) count++;
        }
        cout<<count<<endl;
    }
}