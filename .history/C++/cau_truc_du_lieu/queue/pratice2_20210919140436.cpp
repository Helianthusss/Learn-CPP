#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> arr[100];
    int sum=0, n,array,temp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>> array;
        arr.push(array);
    }
    for(int i= 0; i<n; i++)
    {
        array=arr.front();
        if(arr.front()>arr.back()){
            temp =arr.front();
            arr.front()=arr.back();
            arr.back() =temp;
        }     
        cout<<arr.front()<<" ";
        arr.pop();
    }
    return 0;
}