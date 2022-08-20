#include <bits/stdc++.h>

using namespace std;

typedef std::vector<unsigned int> Digits;

Digits factorial(unsigned int maxFactor){
    Digits result = { 1 };
    result.reserve(2568); 
    for (unsigned int factor = 2; factor <= maxFactor; factor++){
        unsigned int carry = 0;
        for (auto& digit : result){
            digit = digit * factor + carry;
            if (digit >= 10){
                carry  = digit / 10;
                digit %= 10;
            }else
                carry  = 0;
        }
        while (carry != 0){
            result.push_back(carry % 10);
            carry /= 10;
        }
    }
    return result;
}

int main(){
    unsigned int number;
    cin >> number;
    unsigned int sum = 0;
    for (auto i : factorial(number))
        sum += i;
    cout << sum << endl;

    return 0;
}