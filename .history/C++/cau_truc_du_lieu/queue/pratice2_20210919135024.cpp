#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> arr;
    int sum=0, n,array[100],temp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>> array[i];
        arr.push(array[i]);
    }
    for(int i= 0; i<n; i++)
    {
        array =arr.front();
        if(array[i]>array[i+1]){
            temp =array[i];
            array[i] = array[i+1];
            array[i+1] =temp;
        }     
        cout<<array<<" ";
        arr.pop();
    }
    return 0;
}