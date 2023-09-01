#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    map<string, string> m1;
    map<string, string> m2;
    vector<string> v(n);
    string ans;
    pair<int, string> p;
    p.first=INT_MIN;
    bool q=false;
    for(int i=0; i<n; i++)
    {
        string a, b;
        cin >> a >> b;
        if(m1.find(b)!=m1.end() && !(q) && m1[b]!=a)
        {
            ans=b;
            q=true;
        }
        m1[b]=a;
        m2[a]=b;
        v[i]=a;
    }
    if(q)
    {
        cout << ans;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        string s=v[i];
        int j;
        for(j=0; m2.find(s)!=m2.end(); j++)
        {
            s=m2[s];
        }
        if(p.first<=j)
        {
            p.first=j;
            p.second=v[i];
        }
    }
    if(!(q))
    {
        cout << p.second;
    }
    return 0;
}
