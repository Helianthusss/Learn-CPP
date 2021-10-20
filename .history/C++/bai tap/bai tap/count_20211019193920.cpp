#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>Arr;
    int n,m;
    int a[n],b[m];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>> a[i];
        Arr.insert(a[i]);  
    }
    for(int j=0;j<m;j++){
        cin>> b[j];
        Arr.insert(b[j]);  
    }
    set<int, greater<int> >::iterator itr;
     for (itr = Arr.begin(); itr != Arr.end(); itr++)
    {
        cout << *itr<<" ";
    }
    return 0;
}