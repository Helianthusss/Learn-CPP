#include<bits/stdc++.h>
using namespace std;
int pagesNumbering(int n)
{
    int a=n;
    int mu=0,heso=1,tong=0;
    if(n<10) return n;
    while(n>9){
        n=(n-(n%10))/10;
        tong +=heso*pow(10,mu);
        heso++;mu++;
    }
    return 9*tong+(a-pow(10,mu)+1)*heso;
}
int main(){
    int n;
    cin >>n;
    cout<<pagesNumbering(n);
    return 0;
}