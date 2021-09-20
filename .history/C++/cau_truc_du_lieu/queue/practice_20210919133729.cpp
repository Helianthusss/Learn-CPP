#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> arr;
    int sum=0, n,array[100];
    cin >> n;
    for(int i=0;i<n;i++){
        cin>> array[i];
        arr.push(array[i]);
    }
    for(int i= 0; i<n; i++)
    {
        array[i] =arr.front();
        cout<<array[i]<<endl;
        arr.pop();

    }
    return 0;
}