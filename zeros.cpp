#include <bits/stdc++.h>
using namespace std;

long long brNuli(int x)
{
    long long br=0;
    while(x!=0)
    {
        if(x%10==0)
        {
            br++;
        }
        x/=10;
    }
    return br;
}

int main ()
{
    int n, k;
    cin >> n >> k;
    long long a=1;
    for(long long i=k+1; i<=n; i++)
    {
        a*=i;
    }
    for(long long i=2; i<=n-k; i++)
    {
        a/=i;
    }
    cout << brNuli(a) << endl;
}
