//gop mang
#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
    for(int i=0;i<n;i++){
        cin>> a[i]; 
    }
}
int main(){
    set<int>Arr;
    int a[100],b[100],c[100];
    int n,m;
    cin>>n>>m;
    nhap(a,n);
    nhap(b,m);
    int p=m+n;
    for(int i=0;i<p;i++){
        if(i<n) c[i]=a[i];
        else c[i]=b[i-n];
        Arr.insert(c[i]);
    }
    cout<<Arr.size();
    return 0;
}