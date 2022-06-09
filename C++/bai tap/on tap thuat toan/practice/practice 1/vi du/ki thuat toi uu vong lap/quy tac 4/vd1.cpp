#include<iostream>

using namespace std;

int main(){
    int i,n; cin>>n;
    int a[n];
    for(int i=1; i<=n;i++) cin >>a[i];
    i =1; 
    while(i<n){
        int j=i+1;
        while(j<=n) {
            if(a[i] > a[j]){
                swap(a[i],a[j]);
            }
            if(j+1 <=n && a[i]> a[j=1]){
                swap(a[i],a[j+1]);
            }
            j+=2;
        } 
        i+=1; 
    }
    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
    return 0;
}