#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, q;
    cin >> n >> q;
    set<int> s;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v[i]=INT_MAX;
        auto it=s.lower_bound(x);
        if(it!=s.end())
        {
            //cout << (*it) << endl;
            v[i]=min(v[i], (*it)-x);
        }
        if(it!=s.begin())
        {
            it--;
            v[i]=min(v[i], x-(*it));
        }
        if(i>1)
        {
            v[i]=min(v[i], v[i-1]);
        }
        s.insert(x);
    }
    for(int i=0; i<q; i++)
    {
        int x;
        cin >> x;
        cout << v[x-1] << " ";
    }
    return 0;
}
