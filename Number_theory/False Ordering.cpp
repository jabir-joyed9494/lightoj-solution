#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c1=1;cin>>tc;
    while(tc--)
    {
        int n;cin>>n;
        int counts[1001]={0},m=0;
        pair<int , int>a[1002];
        int cnt=0;
        for(int i=1;i<=1000;i++)
        {
            cnt=0;
            for(int j=1;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    if(j*j==i)
                    {
                        cnt++;
                    }
                    else cnt+=2;
                }
            }
           // counts[cnt]++;
            a[i].first=cnt;
            a[i].second=i;
        }
        sort(a,a+1000);
      /*  for(int i=1;i<=1000;i++)
        {
            cout<<a[i].first<<" "<<a[i].second<<endl;
           //cout<<counts[i]<<" ";
        }
        cout<<endl<<endl;*/
        counts[1]=1;
        int k=2;
        for(int i=2;i<=50;i++)
        {
           for(int j=1000;j>=2;j--)
           {
              // if(a[j].first==0) break;
            if(a[j].first==i)
               {
                   counts[k]=a[j].second;
                   //a[j].first=0;
                   k++;
               }
           }
        }
       /* for(int i=1;i<=1000;i++)
        {
           // cout<<a[i].first<<" "<<a[i].second<<endl;
           cout<<counts[i]<<" ";
        }*/
        cout<<"Case "<<c1<<":"<<" "<<counts[n]<<endl;
        c1++;
    }
    return 0;
}
