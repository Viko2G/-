#include <bits/stdc++.h>
using namespace std;

int a[100000];
long long n, k;

long long f(long long t)
{
    long long ans=0;
    for(long long i=0; i<k; i++)
    {
        ans+=t/a[i];
    }
    return ans;
}

long long bs(long long x)
{
    long long l=0, r=100000-1, m, ans;
    while(l<=r)
    {
        m=(r+l)/2;
        if(f(m)==x)
        {
            if(f(m-1)!=x)
            {
                return m;
            }
            else
            {
                l--;
            }
        }
        m=(r+l)/2;
        if(f(m)>x)
        {
            ans=m;
            r=m-1;
        }
        if(f(m)<x)
        {
            ans=m;
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
    cin >> n >> k;
    for(long long i=0; i<k; i++)
    {
        cin >> a[i];
    }
    cout << bs(n);
    return 0;
}
