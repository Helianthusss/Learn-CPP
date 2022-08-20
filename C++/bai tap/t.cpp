#include<bits/stdc++.h>
using namespace std;


unsigned int reverse(unsigned int x){
    unsigned int result = 0;
    while (x > 9) {
        auto digit = x % 10;
        result *= 10;
        result += digit;
        x /= 10;
    }
    return result * 10 + x;
}
bool onlyOdd(unsigned int x){
    while (x > 0){
        if (x % 2 == 0)
        return false;
        x /= 10;
    }
    return true;
}

int main(){
    const unsigned int factor = 2;

    unsigned int count = 0;
    for (unsigned int i = 11; i < 100*1000*1000; i += factor)
        if (onlyOdd(i + reverse(i)))
        count += factor;
    cout << count << endl;
    return 0;
}