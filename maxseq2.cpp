#include <bits/stdc++.h>
using namespace std;

int dp[1000001];
int n, k;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    vector<int> v(k);
    for(int i=0; i<k; i++)
    {
        cin >> v[i];
    }

    for(int i=0; i<=n; i++)
    {
        dp[i]=-1;
    }

    dp[0]=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<k; j++)
        {
            if(i>=v[j] && dp[i-v[j]]!=-1)
            {
                dp[i]=max(dp[i-v[j]]+1, dp[i]);
            }
        }
    }

    cout << dp[n] << endl;
    return 0;
}
