#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <char>s;
    int n;
    cin>> n;
    while(n>0){
        s.push(n%2 + '0');
        n/= 2;
    }
    while(!s.empty()){
        cout<< s.top();
        s.pop();
    }
    return 0;
}