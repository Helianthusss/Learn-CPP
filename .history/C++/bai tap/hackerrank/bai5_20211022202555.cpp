#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long a[1000];
    long long max=a[0];
    long long min=a[0];
    int count =0,count1 =0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int  i= 1; i < n;i++){
        if (a[i] > highest){
            highest = a[i];
            result ++;
        }
        else if (a[i] < lowest){
            lowest = a[i];
            result1 ++;
        }
    }
    cout<<result <<" "<<result1;
    return 0;
}