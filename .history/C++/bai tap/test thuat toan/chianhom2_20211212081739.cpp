#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int m,n,k;
    int count = 0;
    cin >> m >> n >> k;
    if(m <= n){
        n -= k;
        while(n*m > 0 && (n+m)>=3){
            n--;
            m-=2;
            count++;
            if((n+m < 3) && (n*m != 0)){
                break;
            }
        }
    } else {
        m -= k;
        while(n*m > 0 && (n+m)>=3){
            n--;
            m-=2;
            count++;
            if((n+m < 3) && (n*m != 0)){
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}