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

    int count=0;
    set<int, greater<int> >::iterator itr;
     for (itr = Arr.begin(); itr != Arr.end(); itr++)
    {
        if(Arr[itr].second-Arr[itr].first==1) count++;
    }
    cout<<count;
    return 0;
}