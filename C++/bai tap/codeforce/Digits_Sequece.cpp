// https://codeforces.com/contest/1177/problem/A

#include<bits/stdc++.h>
#include<string>
#include<cassert>
#include<cmath>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
long long maxv = 1e9;

string digits;
long long len = 10000;
string intToString(int n){
    string str;
    while(n){
        int temp = (n%10);
        str += temp +'0';
        n /=10;
    }
    reverse(str.begin(), str.end());
    return str;
}
void stringLinr(){
    for(int i=0;i<=len;i++) digits += intToString(i);
}

int main(){
    stringLinr();
    int n;
    cin>>n;
    printf("%c\n",digits[n-1]);
    return 0;
}