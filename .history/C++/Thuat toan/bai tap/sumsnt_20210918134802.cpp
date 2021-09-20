void snt(std::vector<bool> &vt, int n)
{
    for (int i = 3; i * i <= n; i += 2)
        if (!vt[i])
            for (int j = i * 2; j <= n; j += i)
                vt[j] = true;
}
int primeSum(int n)
{
    if (n < 2) return 0;
    long long answer = 2;
    std::vector<bool> vt(n + 1);
    snt(vt, n);
    for (int j = 3; j <= n; j += 2)
        if (!vt[j]) answer += j;
    return answer % 22082018;
}