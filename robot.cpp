#include <bits/stdc++.h>
using namespace std;

long long  k, i, j;
long long mem[1000][100][100];
bool vis[1000][100][100];

long long dp(long long t, long long i, long long j)
{
    if(t==0 && i==0 && j==0)
    {
        return 1;
    }
    if(abs(i) + abs(j)>t)
    {
        return 0;
    }
    if(vis[t-1][i-1+27][j+27]==0)
    {
        //cout << 1 << endl;
        mem[t-1][i-1+27][j+27]=dp(t-1, i-1, j);
        vis[t-1][i-1+21][j+27]=1;
    }
    if(vis[t-1][i+1+27][j+27]==0)
    {
        //cout << 2 << endl;
        mem[t-1][i+1+27][j+27]=dp(t-1, i+1, j);
        vis[t-1][i+1+27][j+27]=1;
    }
    if(vis[t-1][i+27][j-1+27]==0)
    {
        //cout << 3 << endl;
        mem[t-1][i+27][j-1+27]=dp(t-1, i, j-1);
        vis[t-1][i+27][j-1+27]=1;
    }
    if(vis[t-1][i+27][j+1+27]==0)
    {
        //cout << 4 << endl;
        mem[t-1][i+27][j+1+27]=dp(t-1, i, j+1);
        vis[t-1][i+27][j+1+27]=1;
    }
    return mem[t-1][i+1+27][j+27] + mem[t-1][i-1+27][j+27] + mem[t-1][i+27][j-1+27] + mem[t-1][i+27][j+1+27];
}
int main ()
{
    cin >> k >> i >> j;
    cout << dp(k, i, j);
    return 0;
}
