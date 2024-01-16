#include<bits/stdc++.h>
using namespace std;
#define case  cout<<"Case "<<k<<": ";
#define ll long long int
bool prime[10000005];
vector<ll>v;
void sieve()
{
    for(ll i=2;i<=10000000;i++)
    {
        if(prime[i]==0)
        {
            v.push_back(i);
            for(ll j=i*i;j<=10000000;j+=i)
            {
                prime[j]=1;
            }
        }
    }
}
ll fact(ll n)
{
    ll m=0,temp=0,count=0;
    for(ll i=0;v[i]<=n/2;i++)
    {
        m=n-v[i];//cout<<m<<" "<<v[i]<<endl;
       { if(prime[m]==0)
                count++;}
         //cout<<"p="<<prime[m]<<endl;

    }
    return count;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k=1,tc;cin>>tc;sieve();
    while(tc--)
    {
        ll n;cin>>n;
        case;k++;
        ll res=fact(n);
        cout<<res<<endl;
        //for(ll i=0;i<=10;i++) cout<<v[i]<<" ";
    }
    return 0;
}
