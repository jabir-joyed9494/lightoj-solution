#include<bits/stdc++.h>
using namespace std;
#define case  cout<<"Case "<<k<<": ";
#define ll long long int
bool prime[10000005];
vector<ll>v;
void sieve()
{
    for(ll i=2;i<10000000;i++)
    {
        if(prime[i]==0)
        {
            v.push_back(i);
            for(ll j=i*i;j<10000000;j+=i)
            {
                prime[j]=1;
            }
        }
    }
}
ll fact(ll a)
{
    ll res=1,temp=0,count=0;
    for(ll i=0;v[i]*v[i]<=a;i++)
    {
        count=0;
        while(a%v[i]==0)
        {
            a/=v[i];
            count++;
        }
        res*=(count+1);
       // cout<<"count="<<count<<" "<<"res="<<res<<endl;
    }
    if(a>1) res*=2;
   // cout<<"res="<<res<<endl;
   return res;
}
ll fact1(ll a,ll b)
{
    ll temp=0,res=0,count=0;
    for(ll i=1;i*i<=a;i++)
    {
        if(i<b)
        {
           if(a%i==0)count++;
        }
        else break;
    }

    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
   // for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";
    ll tc,k=1;cin>>tc;while(tc--)
    {
        ll a,b;cin>>a>>b;case;k++;
        ll res=fact(a); //cout<<"res="<<res<<endl;
        ll res1=fact1(a,b); //cout<<"res1="<<res1<<endl;
        ll ans=(res/2)-res1;
        if(ans>0)cout<<ans<<endl;
        else cout<<0<<endl;

    }
    return 0;
}
