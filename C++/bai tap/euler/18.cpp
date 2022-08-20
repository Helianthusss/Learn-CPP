// https://projecteuler.net/problem=18

#include<bits/stdc++.h>

using namespace std;

int main(){

    unsigned int numRows;cin >> numRows;
    vector<unsigned int> last(1);cin >> last[0];
    for (unsigned int row = 1; row < numRows; row++){
        unsigned int numElements = row + 1;
        vector<unsigned int> current;
        for (unsigned int column = 0; column < numElements; column++){
            unsigned int x;
            cin >> x;
            unsigned int leftParent = 0;
            if (column > 0) leftParent = last[column - 1];
            unsigned int rightParent = 0;
            if (column < last.size())rightParent = last[column];
            unsigned int sum = x + max(leftParent, rightParent);
            current.push_back(sum);
        }
        last = current;
        }
        cout << *max_element(last.begin(), last.end()) << endl;

    return 0;
}