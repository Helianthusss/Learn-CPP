#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>> a[i];  
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           if(a[i]>a[j])  swap(a[i],a[j]);
        }
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           if(a[j]-a[i] ==1)  count++;
        }
    }
    cout<<count;
    return 0;
}