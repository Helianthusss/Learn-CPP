#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> arr;
    int sum=0, n,temp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>> temp;
        arr.push(temp);
    }
    for(int i= 0; i<n; i++)
    {
        temp =arr.front();
        sum =(temp%2 != 0 && temp % 3 ==0) ? (sum+temp): sum;
        arr.pop();
    }
    cout << sum << endl;
    return 0;
}