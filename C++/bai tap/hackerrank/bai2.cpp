//https://www.hackerrank.com/challenges/apple-and-orange/problem

#include<iostream>
using namespace std;
int s,t,a,b,n,m,x,p,q;
int main(){
    cin>>s>>t>>a>>b>>n>>m;
    for(int i=0;i<n;i++){cin>>x;x+=a;if(s<=x && x<=t){p++;}}
    for(int i=0;i<m;i++){cin>>x;x+=b;if(s<=x && x<=t){q++;}}
    cout<<p<<endl<<q<<endl;
    return 0;
}