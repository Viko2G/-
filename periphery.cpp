#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, m, c, k;
    cin >> n >> m >> c >> k;
    vector<int> v[n];
    for(int i=0; i<m; i++)
    {
        int x, t;
        cin >> x >> y;
        v[x-1].push_back(y-1);
    }
    vector<int> q[100000];
    v[0].push_back(c-1);
    for(int t=1; ; t++)
    {
        for(int i=0; i<v[])
    }

    return 0;
}
