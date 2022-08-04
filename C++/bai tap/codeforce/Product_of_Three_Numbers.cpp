// https://codeforces.com/contest/1294/problem/C

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >>t;
    long long n;
    long long N;
    int counter = 0;
    while(t--){
        cin>>n;
        N=n;
        counter =0;
        vector<long long> arr;
        for (int i=2;i*i <=N; i++){
            if(n%i == 0){
                counter++;
                n=n/i;
                arr.push_back(i);
            }
            if(counter ==2){
                arr.push_back(n);
                break;
            }
        }
        if(counter <2) cout<<"NO"<<endl;
        else if(arr[0] == arr[2] || arr[1]== arr[2]) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<endl;
        }
    }
    return 0;
}