#include <bits/stdc++.h>
using namespace std;

char table [1000][1000];
bool visited[1000][1000];
int n, m;

int bfs (pair<int,int> s, pair<int,int> f)
{
    queue<pair<pair<int,int>,int>> q;
    q.push({s, 0});
    while(q.size()!=0)
    {
        if(q.front().first.first>0 && table[q.front().first.first-1][q.front().first.second]!='x' && !(visited[q.front().first.first-1][q.front().first.second]))
        {
            q.push({{q.front().first.first-1, q.front().first.second}, q.front().second+1});
            visited[q.front().first.first-1][q.front().first.second]=true;
        }
        if(q.front().first.first<n-1 && table[q.front().first.first+1][q.front().first.second]!='x' && !(visited[q.front().first.first+1][q.front().first.second]))
        {
            q.push({{q.front().first.first+1, q.front().first.second}, q.front().second+1});
            visited[q.front().first.first+1][q.front().first.second]=true;
        }
        if(q.front().first.second>0 && table[q.front().first.first][q.front().first.second-1]!='x' && !(visited[q.front().first.first][q.front().first.second-1]))
        {
            q.push({{q.front().first.first, q.front().first.second-1}, q.front().second+1});
            visited[q.front().first.first][q.front().first.second-1]=true;
        }
        if(q.front().first.second < m-1  && table[q.front().first.first][q.front().first.second+1]!='x' && !(visited[q.front().first.first][q.front().first.second+1]))
        {
            q.push({{q.front().first.first, q.front().first.second+1}, q.front().second+1});
            visited[q.front().first.first][q.front().first.second+1]=true;
        }
        if(q.front().first==f)
        {
            int x=q.front().second;
            return x;
        }
        //cout << q.front().first.first << " " << q.front().first.second << " " << q.front().second << endl;
        q.pop();
    }
}

int main ()
{
    pair<int,int> s;
    pair<int,int> f;
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
        }
    }
    cout << bfs(s, f) << " " << 1 <<endl;

    return 0;
}
