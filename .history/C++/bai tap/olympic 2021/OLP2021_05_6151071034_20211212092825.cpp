// Trần Đức Anh MSSV: 6151071034
#include<iostream>
using namespace std;

int main(){ 
    int m,n,k;
    cin>>m>>n>>k;
    int S=(m+n)-k;
    if(m>=n) cout<<S/3;
    else cout<<(S/3)-1;
    return 0;
}