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
     for (int i = 0; itr < Arr.size(); i++)
    {
        if(Arr[i]-Arr[i-1]==1) count++;
    }
    cout<<count;
    return 0;
}