#include<bits/stdc++.h>
using namespace std;
int outtime[100000+5];
int col[100000+5];
vector<int>v[100000+5];
int n,m,ttime;
void o_time(int source)
{
    col[source]=2;
    ttime++;
    for(int i=0; i<v[source].size(); i++)
    {
        int child=v[source][i];
        if(col[child]==1)
        {
            o_time(v[source][i]);
        }
    }
    ttime++;
    outtime[source]=ttime;
}
void dfs(int source)
{
    col[source]=3;
    for(int i=0; i<v[source].size(); i++)
    {
        int child=v[source][i];
        if(col[child]==2)
        {
            dfs(child);
        }
    }
}
int main()
{
    int tc,cas=1;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++) v[i].clear();
        for(int i=0; i<m; i++)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            col[a]=1;
            col[b]=1;
        }
        int cnt=0;
        for(int i=1; i<=n; i++)
        {
            if(col[i]==0) cnt++;
        }
        for(int i=1; i<=n; i++)
        {
            if(col[i]==1)
            {
                o_time(i);
            }
        }
        vector<pair<int,int>>topsort;
        for(int i=1; i<=n; i++)
        {
            if(col[i]==2)
            {
                topsort.push_back({outtime[i],i});
            }
        }
        sort(topsort.begin(),topsort.end(),greater<pair<int,int>>());
        for(int i=0; i<topsort.size(); i++)
        {
            if(col[topsort[i].second]==2)
            {
                cnt++;
                dfs(topsort[i].second);
            }
        }
        cout<<"Case "<<cas++<<": "<<cnt<<endl;
        memset(col,0,sizeof col);
        memset(outtime,0,sizeof outtime);
        ttime=0;
    }
}
