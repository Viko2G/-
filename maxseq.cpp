#include <bits/stdc++.h>
using namespace std;

vector<int> dp(100001, -1);

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> s(n);
    for(int i=0; i<k; i++)
    {
        cin >> s[i];
    }
    dp[0]=0;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<k; j++)
        {
            if(i>=s[j] && dp[i-s[j]]!=-1)
            {
                dp[i]=max(dp[i-s[j]]+1, dp[i]);
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}
