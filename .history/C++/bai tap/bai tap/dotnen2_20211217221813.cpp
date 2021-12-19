#include<bits/stdc++.h>
using namespace std;

int main(){
    int candles,makeNew,ans=0;
    cin>>candles>>makeNew;
    int k,s=0;
    int left=candles;
    int z;
    while(z!=0){
        z=left/makeNew;
        k=left%makeNew;
        left=z+k;
        s+=z;
    }
    cout<<candles+s;
    return 0;
}