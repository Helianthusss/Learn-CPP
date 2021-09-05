//https://www.hackerrank.com/challenges/toll-cost-digits/problem



#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll big = 1000000007ll;
ll n,m,k,x,y;

vector<vector<ll> > C(1000001 , vector<ll>());
ll deg[1000001] = {0};

ll mark[100001][10] = {0};
ll ANS[10] = {0};

int main()
{
    ll c1,c2,c3,c4,c5;
    ll a,b,c;
    cin >> n >> m;
    for(c1 = 0;  c1 < m; c1++){
        cin >> a >> b >> c;
        a--;
        b--;
        c%=10;
        for(c2 = 0; c2 < 10; c2++){
            ll a1 = a*10+c2;
            ll b1 = b*10+(c2+c)%10;
            deg[a1]++;
            deg[b1]++;
            C[a1].push_back(b1);
            C[b1].push_back(a1);
        }
    }

    for(c1 = 0; c1 < n; c1++){
        if(mark[c1][0] == 0){
            vector<ll> A;
            ll N[10] = {0};
            queue<ll> Q;
            Q.push(10*c1);
            mark[c1][0] = c1+1;
            while(!Q.empty()){
                a = Q.front();
                Q.pop();
                N[a%10]++;
                if(a%10 == 0){
                    A.push_back(a/10);
                }
                for(c2 = 0; c2 < deg[a]; c2++){
                    b = C[a][c2];
                    if(mark[b/10][b%10] == 0){
                        mark[b/10][b%10] = c1+1;
                        Q.push(b);
                    }
                }
            }

            for(c2 = 0; c2 < A.size(); c2++){
                for(c3 = 0; c3 < 10; c3++){
                    ANS[c3] += N[c3];
                    if(mark[A[c2]][c3] == c1+1)ANS[c3]--;
                }
            }

        }
    }


    for(c1 = 0; c1 < 10; c1++){
        cout << ANS[c1] << "\n";
    }

    return 0;
}