#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n, m, q;
    cin >> n >> m >> q;
    set<unsigned long long> s;
    for(unsigned long long i=0; i<m; i++)
    {
        unsigned long long x;
        cin >> x;
        s.insert(x);
    }
    for(unsigned long long i=0; i<q; i++)
    {
        unsigned long long x;
        cin >> x;
        auto it=s.lower_bound(x);
        //cout << (*it);
        if(x<(*it))
        {
            cout << x << " ";
        }
        else
        {
            while((*it)==x)
            {
                it=s.lower_bound(x+1);
                x++;
                //auto it=s.lower_bound(x);
                //cout << (*it) << " " << x << endl;
            }
            cout << x << " ";
        }
    }
    return 0;
}
