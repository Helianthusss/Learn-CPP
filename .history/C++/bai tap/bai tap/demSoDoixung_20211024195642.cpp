#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,a[100];
    cin>>T; 
    for(int i=0;i<T;i++){
        cin>>a[i];
    }
    for(int i=0;i<T;i++){
        if(a[i]==1){
            cout<<10<<endl;
        }else   cout<<9 * pow(10, (a[i] - 1) / 2)<< endl;
    }
    return 0;
}