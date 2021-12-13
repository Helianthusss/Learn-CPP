// Trần Đức Anh MSSV: 6151071034_CNTT K61
#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ifstream in("OLP2021_05.INP");
    ofstream out("OLP2021_05.OUT");
    int m,n,k;
    cin>>m>>n>>k;
    int S=(m+n)-k;
    if(m>=n) cout<<S/3;
    else cout<<(S/3)-1;
    return 0;
}