//tinh giá trị nguyên logarit cơ số 2 của n
#include<bits/stdc++.h>
using namespace std;

int logarit(int n){
    if(n<0) return -1;
    else if(n>=2)
        return 1+logarit(n/2);
    else return 0;
}
int main(){
    int n;
    cin>>n;
    cout<<logarit(n);
    return 0;
}