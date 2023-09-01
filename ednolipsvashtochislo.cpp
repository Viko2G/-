#include <bits/stdc++.h>
using namespace std;

bool b[1000000];

int main ()
{
    int n;
    cin >> n;
    bitset<1000000> b;
    for(int i=0; i<n-1; i++)
    {
        int x;
        cin >> x;
        b[x-1]=true;
    }
    for(int i=0; i<n; i++)
    {
        if(!(b[i]))
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
