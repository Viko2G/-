#include <bits/stdc++.h>
using namespace std;

long long m[1001][101][101];
bool v[1001][101][101];

long long k, i, j;

long long dp(long long t, long long i, long long j)
{
    if(t==0 && i==0 && j==0)
    {
        return 1;
    }
    else if(t==0)
    {
        return 0;
    }
    if(v[t-1][i-1+69][j+69]==0)
    {
        m[t-1][i-1+69][j+69]=dp(t-1, i-1, j);
        v[t-1][i-1+21][j+69]=1;
    }
    if(v[t-1][i+1+69][j+69]==0)
    {
        m[t-1][i+1+69][j+69]=dp(t-1, i+1, j);
        v[t-1][i+1+69][j+69]=1;
    }
    if(v[t-1][i+69][j-1+69]==0)
    {
        m[t-1][i+69][j-1+69]=dp(t-1, i, j-1);
        v[t-1][i+69][j-1+69]=1;
    }
    if(v[t-1][i+69][j+1+69]==0)
    {
        m[t-1][i+69][j+1+69]=dp(t-1, i, j+1);
        v[t-1][i+69][j+1+69]=1;
    }
    return m[t-1][i+1+69][j+69] + m[t-1][i-1+69][j+69] + m[t-1][i+69][j-1+69] + m[t-1][i+69][j+1+69];
}

int main ()
{
    cin >> k >> i >> j;
    cout << dp(k, i, j);
    return 0;
}
