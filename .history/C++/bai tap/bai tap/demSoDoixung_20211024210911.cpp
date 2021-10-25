#include <iostream>
using namespace std;
int F(int n){   if(n==0 || n==1) return 1;
    else return F(n-2) +F(n-1);
}
bool check(int m){        
    for(int i=0;i<=m;i++){
        if(F(i)==m) return true;
        else return false;
    }
}
int main(){
    int n,a[100],count=0;
    cin >> n;
    for(int i = 0;i <= n;i++){
        cin>>a[i];
    }
    for(int i = 0;i <= n;i++){
        if(check(a[i])) count++;
    }
    cout << count;
    return 0;
}