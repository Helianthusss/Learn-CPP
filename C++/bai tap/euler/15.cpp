#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned int width, height;
    cin >> width >> height;
    const unsigned long long Unknown = 0;
    vector<vector<unsigned long long>> grid(width + 1);
    for (auto& column : grid)  column.resize(height + 1, Unknown);

    grid[width][height] = 1;


    deque<pair<unsigned int, unsigned int>> next;
    next.push_back(make_pair(width - 1, height));
    next.push_back(make_pair(width, height - 1));

    while (!next.empty()){
        auto current = next.front();
        next.pop_front();
        auto x = current.first;
        auto y = current.second;
        if (grid[x][y] != Unknown) continue;

        unsigned long long routes = 0;
        if (x < width)  routes += grid[x + 1][y];
        if (y < height) routes += grid[x][y + 1];

        #define ORIGINAL
        #ifndef ORIGINAL
            routes %= 1000000007; 
        #endif
            grid[x][y] = routes;

        if (x > 0)
            next.push_back(std::make_pair(x - 1, y));
        if (y > 0)
            next.push_back(std::make_pair(x, y - 1));
    }

    cout << grid[0][0] << endl;
  return 0;
}