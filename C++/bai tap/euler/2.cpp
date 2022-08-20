// https://projecteuler.net/problem=2

#include<bits/stdc++.h>
using namespace std;


int main(){

    unsigned int test;
    cin>>test;
    while(test--){
        unsigned long long last;
        cin>>last;
        unsigned long long sum =0;

        unsigned long long a=1;
        unsigned long long b=2;
        while(b<=last){
            if(b%2 ==0)sum+=b;
            auto next = a+b;
            a=b;
            b=next;
        }
        cout<<sum<<endl;
    }
    return 0;
}