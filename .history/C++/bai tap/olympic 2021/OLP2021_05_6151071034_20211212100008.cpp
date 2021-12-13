// Trần Đức Anh MSSV: 6151071034
#include<iostream>
#include <fstream>
using namespace std;

int main(){ 
    ifstream in("OLP2021_05.INP");
    ofstream out("OLP2021_05.OUT");
    cout<<"Tran Duc Anh MSSV: 6151071034"<<endl;
    int m,n,k;
    cin>>m>>n>>k;
    int S=(m+n)-k;
    if(m>=n) cout<<S/3;
    else cout<<(S/3)-1;
    out.close();
    return 0;
}