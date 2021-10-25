#include <bits/stdc++.h>
using namespace std;

long long Fibonacci(int n)
{
    long long Fibo[94];
    Fibo[1] = 0;
    Fibo[2] = 1;

    for (int i = 3; i <= 93; i++)
    {
        Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
    }
    return Fibo[n];
}

int check(long long n)
{
    for (int i = 1; Fibonacci(i) <= n; i++)
    {
        if (Fibonacci(i) == n)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        long long n,a[n],count =0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(check(a[i])) count ++;
        }
        cout<<count<< endl;
    }
    return 0;
}