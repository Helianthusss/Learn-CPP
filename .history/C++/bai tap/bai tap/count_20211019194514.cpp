#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>Arr;
    int n,m;
    int a[n],b[m];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>> a[i]; 
    }
    for(int i=0;i<m;j++){
        cin>> b[i]; 
    }
    int p=n+m; 
    int c[p];
    for(int i=0;i<p;i++){
        if(i<n){
            c[i]=a[i];
            Arr.insert(a[i]);
        }else {
            c[i]=b[i-n]; 
            Arr.insert(c[i]);
    }
    int count = 0;
    set<int, greater<int> >::iterator itr;
     for (itr = Arr.begin(); itr != Arr.end(); itr++)
    {
        count++;
    }
    cout<<count;
    return 0;
}