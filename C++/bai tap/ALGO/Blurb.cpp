#include<bits/stdc++.h>
using namespace std;
int n,x;
set<int>s;

int main(){
    // ifstream in("input.txt");
    // ofstream out("output.txt");
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>x;
        if(s.insert(x).second) cout<<"0 ";
        else cout<<"1 ";
    }
}