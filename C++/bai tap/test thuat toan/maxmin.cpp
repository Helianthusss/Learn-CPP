#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a[10];
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp;
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
           temp = a[i];
           a[i]=a[j];
           a[j]=temp;
       }   
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n-1;i++){
        sum1 +=a[i];
    }
    for(int i=1;i<n;i++){
        sum2 +=a[i];
    }
    cout<< sum1 <<" "<< sum2;
    return 0;
}