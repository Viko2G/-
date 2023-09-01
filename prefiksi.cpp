#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

long long n, q;
long long a[100000];

long long brawlStars(long long x)
{
    long long l=0, r=n-1, m, ans=-1;
    while(l<=r)
    {
        m=(l+r)/2;
        if(a[m]>=x)
        {
            r=m-1;
        }
        if(a[m]<x)
        {
            ans=m;
            l=m+1;
        }
    }
    return ans+1;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    for(long long i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    for(long long i=0; i<q; i++)
    {
        long long x;
        cin >> x;
        long long o=brawlStars(x);
        cout << o << endl;
    }
    return 0;
}
