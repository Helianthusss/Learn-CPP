#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(a[i]>a[i-1]) sort(a[i],a[i-1]);
        if(a[i] == a[i-1]) delete a[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}