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
    hap(b,m);
/*   for(int i=0;i<n;i++){
        cin>> a[i]; 
    }
    for(int i=0;i<m;i++){
        cin>> b[i]; 
    }*/
    int p=m+n;
    int dem=0;
    for(int i=0;i<p;i++){
        if(i<n) c[i]=a[i];
        else c[i]=b[i-n];
        Arr.insert(c[i]);
    }
    set<int, greater<int> >::iterator itr;
     for (itr = Arr.begin(); itr != Arr.end(); itr++)
    {
        dem++;
    }*/
    cout<<dem;
    return 0;
}