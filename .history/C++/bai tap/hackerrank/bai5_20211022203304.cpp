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
        if (a[i] > max){
            max = a[i];
            count ++;
        }
        else if (a[i] < min){
            min = a[i];
            count1 ++;
        }
    }
    cout<<count <<" "<<count1;
    return 0;
}