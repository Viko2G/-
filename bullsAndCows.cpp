#include <bits/stdc++.h>
using namespace std;

int bulls(int a[], int b[])
{
    int ans=0;
    for(int i=0; i<4; i++)
    {
        if(a[i]==b[i])
        {
            ans++;
        }
    }
    return ans;
}

int cows(int a[], int b[])
{
    int ans=0;
    sort(a, a+4);
    sort(b, b+4);
    for(int r=0; r<4; r++)
    {
        for(int p=0; p<4; p++)
        {
            if(a[r]==b[p] && r!=p)
            {
                ans++;
                cout << r << " " << p << endl;
            }
        }
    }
    return ans;
}
int main ()
{
    int a[4];
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    cout << a[0] << a[1] << a[2] << a[3] << endl;
    int x, y;
    cin >> x >> y;
    while(true)
    {
        for(int i=1234; i<=9999; i++)
        {
            int b[4];
            int l=i;
            bool z=false;
            for(int j=0; j<4; j++)
            {
                //cout << l%10;
                if(l%10==0)
                {
                    z=true;
                }
                b[3-j]=l%10;
                l/=10;
                //cout << b[j];
            }
            if(z==false)
            {
                if(bulls(a, b)==x && cows(a, b) ==y)
                {
                    a[0]=b[0];
                    a[1]=b[1];
                    a[2]=b[2];
                    a[3]=b[3];
                    cout <<i<< endl;
                    break;
                }
            }
        }
        cin >> x >> y;
        if(x==4 && y==0)
        {
            break;
        }
    }
    return 0;
}
