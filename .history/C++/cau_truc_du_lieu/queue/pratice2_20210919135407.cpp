#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> arr;
    int sum=0, n,array,temp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>> array;
        arr.push(array);
    }
    for(int i= 0; i<n; i++)
    {
        if(arr[i]>arr[i+1]){
            temp =arr[i];
            arr[i] = arr[i+1];
            arr[i+1] =temp;
        }     
        cout<<arr.front()<<" ";
        arr.pop();
    }
    return 0;
}