#include<bits/stdc++.h>
using namespace std;
#define case  cout<<"Case "<<k<<": ";
#define ll long long int
bool prime[5000005];
vector<ll>v;
void sieve()
{
    for(ll i=2;i<=5000005;i++)
    {
        if(prime[i]==0)
        {
            v.push_back(i);
            for(ll j=i*i;j<=5000005;j+=i)
            {
                prime[j]=1;
            }
        }
    }

}
int main()
{
    sieve();
   // cout<<v.size()<<endl;
   // for(int i=0;i<=100;i++) cout<<v[i]<<" ";
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int tc,k=1;cin>>tc;while(tc--)
   {
           ll n,sum=0,j=0;cin>>n;
           int a[n+1];
           for(int i=0;i<n;i++) cin>>a[i];
           case;k++;
           sort(a,a+n);//for(int i=0;i<n;i++) cout<<a[i]<<" ";
           for(int i=0;i<n;)
           {
              // cout<<a[i]<<" "<<v[j]<<endl;
               if(a[i]<v[j])
                {
                    sum+=v[j];i++;
               }
               else j++;
           }
           cout<<sum<<" "<<"Xukha"<<endl;
   }
   return 0;

}
