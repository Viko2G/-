#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n;
    cin >> n;
    long long y=1;
    long long br=0;
    for(int i=2; n!=1; i++)
    {
        //cout << i << endl;
        for(int j=1; n%i==0; j++)
        {
            br++;
            y*=j;
            //cout << y << endl;
            n/=i;
            //cout << n << endl;
        }
    }
    long long z=1;
    for(int i=2; i<=br; i++)
    {
        z*=i;
    }
    cout << z/y << endl;
    //cout << br << endl;
    return 0;
}
