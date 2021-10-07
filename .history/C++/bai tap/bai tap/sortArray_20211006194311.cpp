#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>Arr;
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>> a[i];
        Arr.insert(a[i]);  
    }
    for(int i=0;i<n;i++){
        if(a[i] > a[i-1]) swap(a[i],a[i-1]);
    }
    set<int, greater<int> >::iterator itr;
     for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr<<" ";
    }
    return 0;
}