#include <bits/stdc++.h>
using namespace std;

char table [1000][1000];
int times [1000][1000];
int patients [1000][1000];
int n, m;
pair<int,int> s;
pair<int,int> f;

void bfs()
{
    times[s.first][s.second]=0;
    patients[s.first][s.second]=0;
    for(int t=1; t<100000; t++)
    {
        if(times[f.first][f.second]!=-1)
        {
            cout << times[f.first][f.second] << " " << patients[f.first][f.second] << endl;
            /*for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    cout << times[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    cout << patients[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    cout << table[i][j] << " ";
                }
                cout << endl;
            }*/
            return ;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(times[i][j]==t-1)
                {
                    cout << i << " " << j << endl;
                    if(i>0 && table[i-1][j]!='x' && times[i-1][j]==-1)
                    {
                        cout << i << " " <<j << endl;
                        times[i-1][j]=t;
                        if(table[i-1][j]=='+')
                        {
                            patients[i-1][j]=patients[i][j]+1;
                        }
                        else
                        {
                            patients[i-1][j]=patients[i][j];
                        }
                    }
                    if(i<n-1 && table[i+1][j]!='x' && times[i+1][j]==-1)
                    {
                        cout << i << " " <<j << endl;
                        times[i+1][j]=t;
                        if(table[i+1][j]=='+')
                        {
                            patients[i+1][j]=patients[i][j]+1;
                        }
                        else
                        {
                            patients[i+1][j]=patients[i][j];
                        }
                    }
                    if(j>0 && table[i][j-1]!='x' && times[i][j-1]==-1)
                    {
                        cout << i << " " <<j << endl;
                        times[i][j-1]=t;
                        if(table[i][j-1]=='+')
                        {
                            patients[i][j-1]=patients[i][j]+1;
                        }
                        else
                        {
                            patients[i][j-1]=patients[i][j];
                        }
                    }
                    if(j<m-1 && table[i][j]+1!='x' && times[i][j+1]==-1)
                    {
                        cout << i << " " <<j << endl;
                        times[i][j+1]=t;
                        if(table[i][j+1]=='+')
                        {
                            patients[i][j+1]=patients[i][j]+1;
                        }
                        else
                        {
                            patients[i][j+1]=patients[i][j];
                        }
                    }
                }
            }
        }
    }

}

int main ()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> table[i][j];
            if(table[i][j]=='S')
            {
                s.first=i;
                s.second=j;
            }
            if(table[i][j]=='T')
            {
                f.first=i;
                f.second=j;
            }
            times[i][j]=-1;
            patients[i][j]=0;
        }
    }
    bfs();
    return 0;
}
