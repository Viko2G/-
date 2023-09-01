#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int m, n;
    cin >> m >> n;
    bitset<1000001> b;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        b[x]=true;
    }
    int br=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(b[x])
        {
            br++;
        }
    }
    cout << br << endl;
    return 0;
}
