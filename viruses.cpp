#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, m;
    cin >> n >> m;
    int k;
    cin >> k;
    vector<pair<int,int>> v;
    for(int i=0; i<k; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x-1,y-1});
    }
    int ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int m=INT_MAX;
            for(int r=0; r<k; r++)
            {
                m=min(m,abs(i-v[r].first)+abs(j-v[r].second));
            }
            ans=max(ans, m);
        }
    }
    cout << ans;
    return 0;
}
