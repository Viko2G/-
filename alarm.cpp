#include <bits/stdc++.h>
using namespace std;

int n;
pair<int,int> p[21];

int dist(pair<int,int> a, pair<int,int> b)
{
    return abs(a.first-b.first)+abs(a.second-b.second);
}

int f(int state, int last)
{
    if(state==1 && last==0)
    {
        return 1;
    }
    int ans=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(i==last)
        {
            continue;
        }
        if((state&(1<<i))==0)
        {
            continue;
        }
        ans=f(state^(1<<last), i)+dist(p[i], p[last]);
    }
    return ans;
}

int main ()
{
    int a, b;
    cin >> a >> b;
    int x, y;
    cin >> x >> y;
    p[0]={x, y};
    cin >> n;
    for(int i=1; i<n+1; i++)
    {
        int q, w;
        cin >> q >> w;
        p[i].first=q;
        p[i].second=w;
    }
    cout << f((1<<n)-1, n-1);
    return 0;
}
