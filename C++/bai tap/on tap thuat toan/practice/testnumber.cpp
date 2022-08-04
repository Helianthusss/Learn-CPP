#include<bits/stdc++.h>

using namespace std;

void compress(vector<int> &a) {
    set<int> s(a.begin(), a.end());
    vector<int> b(s.begin(), s.end());
    for (int &x: a) {
        x = lower_bound(b.begin(), b.end(), x) - b.begin() + 1;
    }
}


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    vector<int> a(n);
    for (int &x: a) cin >> x;
    compress(a);
    int sum =0;
    for (int x: a) sum +=x;
    cout<< sum;
    return 0;
}