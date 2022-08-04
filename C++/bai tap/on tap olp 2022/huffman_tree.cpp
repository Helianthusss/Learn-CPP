//https://oj.vnoi.info/problem/heap1

#include <bits/stdc++.h>
#define long long long

using namespace std;
int n, t;

int main() {
    cin>>t;
    while (t--) {
        cin>>n;
        priority_queue<long, vector<long>, greater<long> > heap;
        int v;
        for(int i = 1; i <= n; i++) {
            cin>>v;
            heap.push(v);
        }
        long res = 0;
        while (heap.size() > 1) {
            int a = heap.top(); heap.pop();
            int b = heap.top(); heap.pop();
            res += a + b;
            heap.push(a + b);
        }
        cout<<res<<endl;
    }
    return 0;
}