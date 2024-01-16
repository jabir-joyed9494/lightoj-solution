#include<bits/stdc++.h>
using namespace std;
#define case  cout<<"Case "<<k<<": ";
#define ll long long int
bool prime[1001];
vector<ll>v;
void sieve()
{
    for(int i=2; i<=101; i++)
    {
        if(prime[i]==0)
        {
            v.push_back(i);
            for(int j=i*i; j<=101; j+=i)
            {
                prime[j]=1;
            }
        }
    }
}
int fact(ll n,ll i)
{
    ll count=0,temp=n,res=v[i];
    while(res<=n)
    {
        count+=n/res;
        res=v[i]*res;
       // cout<<"res="<<res<<endl;
    }
    return count;
}
int main()
{
    sieve();
    //for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    int k=1,tc;cin>>tc;while(tc--)
    {
        int n,i=0,m=0;cin>>n;
        case;k++;
        pair<ll,ll>pairs[n+2];
        for( i=0;v[i]<=n;i++)
        {
            pairs[i].first=v[i];
            pairs[i].second=fact(n,i);
           // cout<<pairs[i].first<<" "<<pairs[i].second<<endl;
        }
         cout<<n<<" "<<"="<<" "<<pairs[0].first<<" "<<"("<<pairs[0].second<<")";
         for(int j=1;j<i;j++)
      cout<<" "<<"*"<<" "<<pairs[j].first<<" "<<"("<<pairs[j].second<<")";
    cout<<endl;
    }
    return 0;
}
