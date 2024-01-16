#include<bits/stdc++.h>
using namespace std;
#define case  cout<<"Case "<<k<<": ";
#define ll long long int
ll fact(ll n)
{
    ll temp=0,mid=0,high=1000000000,low=1,count=0;
    while(high>=low)
    {
        mid=(high+low)/2;//cout<<"mid="<<mid<<endl;
        count=0;
        for(int i=5;i<=mid;i*=5)
        {
            count+=mid/i;
            //cout<<"cnt="<<count<<endl;
        }
       if(count<n)
       {
           low=mid+1;
       }
       else if(n<count)
       {
           high=mid-1;
       }
       else
       {
          // cout<<"mid1="<<mid<<endl;
           //cout<<low<<" "<<high<<endl;
           high=mid-1;
          // break;
          temp=mid;
       }
    }
    return temp;
}
int main()
{
     //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int tc;cin>>tc;int k=1;
    while(tc--)
    {
        ll n;cin>>n;
        case;k++;
        ll res=fact(n);
        if (res==0) cout<<"impossible"<<endl;
        else cout<<res<<endl;
    }

}
