#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>arr;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
        push(arr[i]);
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i] %2 != 0 && arr[i] % 3 ==0){
            sum += arr[i];
        }
    }
    cout << sum << endl;
    return 0;

}