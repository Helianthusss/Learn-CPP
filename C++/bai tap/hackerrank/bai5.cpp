#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> ii;

int32_t main() {
    int best = -1, worst = 1e9;
    int n;
    cin>>n;
    int bbest = 0, bworst = 0;
    while (n--) {
        int x;
        cin>>x;
        if (x > best) {
            best = x;
            ++bbest;
        }
        if (x < worst) {
            worst = x;
            ++bworst;
        }
    }
    cout<<(bbest-1)<<" "<<(bworst-1)<<endl;
}