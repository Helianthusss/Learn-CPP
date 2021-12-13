// Trần Đức Anh MSSV: 6151071034_CNTT K61
#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream in("OLP2021_02.INP");
    ofstream out("OLP2021_02.OUT");
    int n, k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0; i < n; i++){
        cin>>a[i];
    }
    for(int i=0; i < n; i++){
        cin>>b[i];
    }
    int min=b[0];
    for(int i=0; i < n; i++){
        if(a[i]>=k){
            if(b[i]<min) min=b[i];
        }
    }
    int count=0;
    for(int i=0; i < n; i++){
        if(b[i]==min) count++;
    }
    if(count==0) cout<<-1<<endl;
    else   cout<<count<<" "<<min<<endl;
    return 0;
}