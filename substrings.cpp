#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    string p;
    cin >> s >> p;
    int br=0;
    do
    {
        for(int i=0; i<s.size()-p.size(); i++)
        {
            if(s.substr(s.begin()+i, p.size())==p)
            {
                br++;
            }
        }
    }while(next_permutation(s.begin(), s.end()));
    return 0;
}
