#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>arr;
    int sum=0, n=arr.size(),temp;
    cin >> n;
    for(int i=0;i<arr.size();i++){
        cin>> temp;
        push(temp);
    }
    for(auto i:arr){
        sum =(temp%2 != 0 && temp % 3 ==0) ? (sum+temp): sum;
    }
    cout << sum << endl;
    return 0;

}