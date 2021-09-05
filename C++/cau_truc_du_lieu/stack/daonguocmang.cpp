#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>arr;
    int n,a;
    cin>> n;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push(a);
    }
    while(!arr.empty()){
        cout << arr.top()<<" ";
        arr.pop();
    }
    return 0;
}