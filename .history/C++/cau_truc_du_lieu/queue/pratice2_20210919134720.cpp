#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> arr;
    int sum=0, n,array;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>> array;
        arr.push(array);
    }
    for(int i= 0; i<n; i++)
    {
        array =arr.front();
        if(array>array+1)
            sort(array,array+1);
        cout<<array<<endl;
        arr.pop();
    }
    return 0;
}