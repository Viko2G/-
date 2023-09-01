#include <bits/stdc++.h>
using namespace std;
int n, q;
long long v[100000];

long long bs(long long x)
{
    if(x>v[n-1])
    {
        return -1;
    }
    long long l=0, r=n-1, m, ans;
    while(l<=r)
    {
        m=(r+l)/2;
        if(v[m]>x)
        {
            ans=v[m];
            r=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    return ans;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    for(long long i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v, v+n);
    for(long long i=0; i<q; i++)
    {
        long long x;
        cin >> x;
        cout << bs(x) << " ";
    }
    return 0;
}
