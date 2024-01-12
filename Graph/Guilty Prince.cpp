#include<bits/stdc++.h>
#define ff first
#define ss second
#define case  cout<<"Case "<<k<<": ";
using namespace std;
int col[50][50];
int n,m;
int xx,yy;
void bfs(int xx, int yy)
{
    queue< pair<int,int> >q;
    q.push({xx,yy});
    col[xx][yy]=1;
    while(!q.empty())
    {
        pair <int, int>x = q.front();
        q.pop();
        if((col[x.ff-1][x.ss]==0) && x.ff-1>=0)
        {
            q.push({x.ff-1,x.ss});
            col[x.ff-1][x.ss]=1;
        }
        if((col[x.ff][x.ss+1]==0) && x.ss+1<n)
        {
            q.push({x.ff,x.ss+1});
            col[x.ff][x.ss+1]=1;
        }
        if((col[x.ff][x.ss-1]==0) && x.ss-1>=0)
        {
            q.push({x.ff,x.ss-1});
            col[x.ff][x.ss-1]=1;
        }
        if((col[x.ff+1][x.ss]==0) && x.ff+1<m)
        {
            q.push({x.ff+1,x.ss});
            col[x.ff+1][x.ss]=1;
        }
    }
}
int main()
{
    int tc,k=1;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        char ch;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>ch;
                if(ch=='.')
                {
                    col[i][j]=0;
                }
                else if(ch=='#')
                {
                    col[i][j]=2;
                }
                else
                {
                    xx=i;
                    yy=j;
                }
            }
        }
        case;k++;
        bfs(xx,yy);
       // cout<<xx<<" "<<yy<<endl;
       int cnt=0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(col[i][j]==1)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
