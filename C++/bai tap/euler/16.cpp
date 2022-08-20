#include <bits/stdc++.h>

using namespace std;

typedef vector<unsigned int> Digits;

int main(){
    vector<Digits> cache;
    cache.push_back({ 1 });
    unsigned int exponent;
    cin >> exponent;

    for (unsigned int current = cache.size(); current <= exponent; current++){
        auto power = cache.back();
        unsigned int carry = 0;
        for (auto& i : power){
            i = 2 * i + carry;
            if (i >= 10){
                i -= 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
        }
        if (carry != 0) power.push_back(carry);

        cache.push_back(power);
    }

    unsigned int sum = 0;
    for (auto i : cache[exponent])
        sum += i;
    cout << sum << endl;

    return 0;
}