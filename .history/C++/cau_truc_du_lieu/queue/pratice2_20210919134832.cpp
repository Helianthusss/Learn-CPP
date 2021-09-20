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
        array =arr.front();
        if(array>array+1){
            temp =array;
            array = array+1;
            array+1 =temp;
        }     
        cout<<array<<" ";
        arr.pop();
    }
    return 0;
}