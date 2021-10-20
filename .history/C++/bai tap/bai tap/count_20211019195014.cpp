#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>Arr;
    int n,m;
    int a[100],b[100];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>> a[i]; 
    }
    for(int i=0;i<m;i++){
        cin>> b[i]; 
    }
    int p=n+m; 
    int c[100];
    for(int i=0;i<p;i++){
        if(i<n){
            c[i]=a[i];
            Arr.insert(c[i]);
        }else {
            c[i]=b[i-n]; 
            Arr.insert(c[i]);
    }
    }
    int count = 0;
    set<int, greater<int> >::iterator itr;
     for (itr = Arr.begin(); itr != Arr.end(); itr++){
        count++;
    }
    cout<<count;
    return 0;
}