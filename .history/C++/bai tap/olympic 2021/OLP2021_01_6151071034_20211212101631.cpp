// Trần Đức Anh MSSV: 6151071034
#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream in("OLP2021_01.INP");
    ofstream out("OLP2021_01.OUT");
    int n, p, sum = 0;
    cin>>n;
    int a[5] = { 5, 180 };
    if (n <= a[0]) {
        cout << 4 + n;
    }
    if (n > a[0] && n <= a[1]) {
        p = (n - 5) / 2;
        sum = 4 + 5 + p;
        cout << sum;
    }
    return 0;
}