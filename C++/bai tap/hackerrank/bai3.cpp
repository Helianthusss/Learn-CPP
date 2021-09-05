// https://www.hackerrank.com/challenges/kangaroo/problem

#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    if(x2 >x1 && v2>v1) 
        cout<<"NO";
    else if((v2-v1) !=0 && (x2-x1)%(v1-v2) == 0)
        cout <<"YES";
    else 
        cout <<"NO";
    return 0;
}
//if x2>x1 and v2>v1: return 'NO' elif (v2-v1) != 0 and (x2-x1)%(v1-v2)==0: return 'YES' else: return 'NO'