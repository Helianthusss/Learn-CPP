#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>Arr;
    int a[100],b[100],c[100];
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>> a[i]; 
    }
    for(int i=0;i<m;i++){
        cin>> b[i]; 
    }
    int p=m+n;
    for(int i=0;i<p;i++){
        if(i<n) c[i]=a[i];
        else c[i]=b[i-n];
        Arr.insert(c[i]);
    }
    int dem=0;
    set<int, greater<int> >::iterator itr;
     for (itr = Arr.begin(); itr != Arr.end(); itr++)
    {
        dem++;
    }
    cout<<dem;
    return 0;
}