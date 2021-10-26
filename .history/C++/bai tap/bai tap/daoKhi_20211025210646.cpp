#include<bits/stdc++.h>
#define run() int T; cin>>T; cin.ignore(); while(T--)
using namespace std;

int main(){
    run(){
        int n,x;  cin>>n>>x;
        vector<int>a(n);
        for(auto &i : a)    cin>>i;
        int count = 0;
        for(int i = 0; i < n-1; i++){
            for(int j=i+1;j<n;j++)
                if(a[i]+a[j]==x) count++;
        }
        cout<<count<<endl;
    }
}