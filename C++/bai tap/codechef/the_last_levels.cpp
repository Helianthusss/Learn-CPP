// https://www.codechef.com/submit/LASTLEVELS

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        if(x <=3) cout<<x*y<<endl;
        else {
            int n;
            n = ceil(float(x)/3);
            cout<<x*y+(n-1)*z<<endl;
        }
    }
    return 0;
}