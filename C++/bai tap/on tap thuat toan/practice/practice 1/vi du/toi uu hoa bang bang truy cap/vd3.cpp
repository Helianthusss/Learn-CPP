#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n; 
    int a[n]; 
    for(int i=1; i<=n;i++){
        cin>>a[i]; 
    }
    int maxsofar =0, maxendinghere =0;
    for(int i=1; i<=n;i++){
        maxendinghere = max(maxendinghere +a[i],0);
        maxsofar = max(maxsofar,maxendinghere);
    }
    cout<<maxendinghere;
}