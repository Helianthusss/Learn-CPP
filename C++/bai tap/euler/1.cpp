// https://projecteuler.net/problem=1

#include<bits/stdc++.h>

using namespace std;

unsigned long long sum(unsigned long long x){
    return x*(x+1)/2;
}

int main(){
    unsigned long long last;
    cin>>last;
    last--;
    auto sumThree = 3*sum(last/3);
    auto sumFive = 5*sum(last/5);

    auto sumFifteen = 15*sum(last/15);
    cout<<sumThree+sumFive-sumFifteen<<endl;

    return 0;
}