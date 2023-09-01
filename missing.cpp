#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    bitset<1000000> b;
    int q=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(!(b[x-1]))
        {
            b[x-1]=true;
        }
        else
        {
            q=x;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(!(b[i]))
        {
            cout << i+1 << " " << q << endl;
            //return 0;
        }
    }
    /*for(int i=0; i<n; i++)
    {
        cout << b[i] << " ";
    }*/
    return 0;
}

