#include <bits/stdc++.h>
using namespace std;

long long brawlStars(long long x, long long n, vector<long long> a)
{
    if(x>a[n-1])
    {
        return -1;
    }
    long long l=0, r=n-1, m, ans=0;
    while(l<=r)
    {
        m=(l+r)/2;
        if(a[m]==x)
        {
            return m;
        }
        if(a[m]>x)
        {
            ans=m;
            r=m-1;
        }
        if(a[m]<x)
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
    long long t;
    cin >> t;
    for(long long h=0; h<t; h++)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        cin >> v[0];
        for(int i=1; i<n; i++)
        {
            cin >> v[i];
            v[i]+=v[i-1];
            //cout << v[i] << " ";
        }
        cout << brawlStars(k, n, v) << endl;
    }
    return 0;
}
