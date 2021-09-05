#include <bits/stdc++.h>
using namespace std;
 
int countNonEmptySubstr(string str)
{
   int n = str.length();
   return n*(n+1)/2;
}
int main()
{
    string s;
	cin>>s;
    cout << countNonEmptySubstr(s);
    return 0;
}