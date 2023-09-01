#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n, a, b;
    cin >> n >> a >> b;
    long long ans=0;
    for(long long x=3; x<=a && x<=n-2; x++)
    {

        long long z=1;
        for(long long i=2; i<=a; i++)
        {
            z*=i;
            if(i<=x)
            {
                z/=i;
            }
            if(i<=a-x)
            {
                z/=i;
            }
        }
        //cout << z << endl;
        long long y=1;
        for(long long i=2; i<=b; i++)
        {
            y*=i;
            if(i<=n-x)
            {
                y/=i;
            }
            if(i<=b-(n-x))
            {
                y/=i;
            }
            //cout << y << " ";
        }
        //cout << endl;
       // cout << y << endl;
       // cout << x << " " << n-x << endl;
        ans+=z*y;

    }
    cout << ans;
    return 0;
}
