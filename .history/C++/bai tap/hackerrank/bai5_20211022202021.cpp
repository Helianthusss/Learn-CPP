#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long a[1000];
    int highest, lowest;
    highest = lowest = a[0];
    
    int result=0,result1=0;
    cin>>n;
    for (int  i= 1; i < n;i++){
        if (a[i] > highest){
            highest = a[i];
            result ++;
        }
        else if (a[i] < lowest)
        {
            lowest = a[i];
            result1++;
        }
    }
    cout<<result <<" "<<result1;
    return 0;
}