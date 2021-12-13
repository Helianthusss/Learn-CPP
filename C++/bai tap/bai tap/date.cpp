#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);
    char* dt = ctime(&now);
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "The current UTC date and time is:"<< dt << endl;
    return 0;
}