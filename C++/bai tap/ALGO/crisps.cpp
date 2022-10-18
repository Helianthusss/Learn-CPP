#include<bits/stdc++.h>
using namespace std;

int main(){
    // ifstream in("input.txt");
    // ofstream out("output.txt");
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,a,b,r2=-1,r3=-1,e,x;
    string s,r1 = "-1";
    char c;
    cin>>n>>a>>c>>b;
    for(int i=0;i<n;++i){
        cin>>s>>e>>c>>x;
        if(e<=a && x<=b && e*100+x > r2*100+r3){
            r1 =s;r2=e;r3=x;
        } 
    }
    cout<<r1;
}