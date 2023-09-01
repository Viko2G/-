#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long st[1000001];
long long a[220001];

long long getSum(long long idx, long long tl, long long tr, long long ql, long long qr)
{
    if(tl>qr || tr<ql)
    {
        return 0;
    }
    if(ql<=tl && tr<=qr)
    {
        return st[idx];
    }
    long long tm=(tl+tr)/2;
    long long x=getSum(2*idx, tl, tm, ql, qr);
    long long y=getSum(2*idx+1, tm+1, tr, ql, qr);
    return x+y;
}

void dfs(long long idx, long long tl, long long tr)
{
    if(tl==tr)
    {
        st[idx]=a[tl];
        return ;
    }
    long long tm=(tl+tr)/2;
    dfs(2*idx, tl, tm);
    dfs(2*idx+1, tm+1, tr);
    st[idx]=st[2*idx] + st[2*idx+1];
}

void change(long long idx, long long tl, long long tr, long long pos, long long x)
{
    if(tl==tr)
    {
        if(tl==pos)
        {
            st[idx]=x;
        }
        return ;
    }
    if(tr<pos || tl>pos)
    {
        return ;
    }
    long long tm=(tl+tr)/2;
    change(2*idx, tl, tm, pos, x);
    change(2*idx+1, tm+1, tr, pos, x);
    st[idx]=st[2*idx] + st[2*idx+1];
}

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for(long long i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    dfs(1, 1, n);

    for(long long i=0; i<m; i++)
    {
        string s;
        long long x, y;
        cin >> s >> x >> y;
        if(s=="SUM")
        {
            cout << getSum(1, 1, n, x, y) << "\n";
        }
        else if(s=="UPDATE")
        {
            change(1, 1, n, x, y);
        }
    }
    return 0;
}
