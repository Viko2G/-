#include <iostream>
using namespace std;

unsigned long long c[1000][1000];

int main ()
{
    unsigned long long n;
    cin >> n;
    for(unsigned long long i=0; i<=n; i++)
    {
        c[i][1]=1;
        for(unsigned long long j=1; j<=i; j++)
        {
            c[i][j]=c[i-1][j-1]+c[i-1][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
