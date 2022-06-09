#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fillchar(a,x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Item {
    int value, weight;
    Item(int value, int weight): value(value), weight(weight){
    }
};

bool cmp(struct Item a, struct Item b){
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(struct Item arr[],int N, int size){
    sort(arr, arr + size, cmp);
    int curWeight = 0;
    double finalvalue = 0.0;
    FOR(i,1,size) {
        if (curWeight + arr[i].weight <= N) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }else {
            int remain = N - curWeight;
            finalvalue += arr[i].value* ((double)remain/arr[i].weight);
            break;
        }
    }
    return finalvalue;
}

int main(){
    faster
    int N = 60;
    Item arr[] = { { 100, 10 },{ 280, 40 },{ 120, 20 }, { 120, 24 } };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum profit earned = "<< fractionalKnapsack(arr, N, size);
    return 0;
}