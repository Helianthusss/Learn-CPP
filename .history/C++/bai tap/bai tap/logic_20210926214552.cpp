#include<iostream>
using namespace std;

int main(){
    int tre_trung,xinh_dep,co_gau,giau_co;
    cin>>tre_trung>>xinh_dep>>co_gau>>giau_co;
    if(tre_trung ==1 && xinh_dep==1 && co_gau==1) cout<<"1";
    else if(tre_trung ==0&& xinh_dep==0 && co_gau==1 && giau_co == 1) cout<<"1";
    else if(tre_trung ==0&& xinh_dep==0 && co_gau==0 && giau_co == 0) cout<<"1";
    else cout<<"0";
    return 0;
}