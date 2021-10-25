#include <bits/stdc++.h>
#define run() int T; cin>>T; cin.ignore(); while(T--)
using namespace std;

bool checkNguyen(int n){
    int s=sqrt(n);
    return (s*s==n);
}
bool checkFibonacci(int n){
    return checkNguyen(5*pow(n,2)+4) || checkNguyen(5*pow(n,2)-4);
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