#include<bits/stdc++.h>
using namespace std;
#define case  cout<<"Case "<<k<<": ";
#define ll long long int
bool prime[10000005];
vector<ll>v;
void sieve(){
    for(ll i=2;i<10000000;i++)
   {
    if(prime[i]==0)
    {
        v.push_back(i);
        for(ll j=i*i;j<10000000;j+=i) prime[j]=1;
    }
   }
}
ll fact(ll n)
{
    ll count=0,res=1;
    for(ll i=0;v[i]*v[i]<=n;i++)
    {
        count=0;
        while(n%v[i]==0)
        {
            count++;
            n/=v[i];
        }
        res*=(count+1);
    }
    if(n>1) res*=2;
    return res;
}
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k=1;
    int tc;cin>>tc;sieve();
        while(tc--)
        {
            ll n;cin>>n;
            case;k++;
            ll res=fact(n);
            if(n==1) cout<<0<<endl;
  else cout<<res-1<<endl;
        }
  //  for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
  return 0;

}
