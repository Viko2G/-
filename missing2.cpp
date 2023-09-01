#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    bitset<1000000> b;
    for(int i=0; i<n-2; i++)
    {
        int x;
        cin >> x;
        b[x-1]=true;
    }
    int br=2;
    for(int i=0; br!=0 i<n; i++)
    {
        if(!(b[i]))
        {
            cout << i+1 << " ";
            br--;
        }
    }
    return 0;
}
