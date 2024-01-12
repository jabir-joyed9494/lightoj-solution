#include <bits/stdc++.h>
using namespace std;
#define case  cout<<"Case "<<k<<": ";
#define ll long long int
int phi[5000005];
unsigned long long phisum[5000005];
void calculatephi(){
    for(ll i=1;i<=5000000;i++) phi[i]=i;
    for(ll i=2;i<=5000000;i++)
    {
        if(phi[i]==i)
        {
            for(ll j=i;j<=5000000;j+=i)
            {
                phi[j]-=(phi[j]/i);
               // cout<<phi[j]<<endl;
            }
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    calculatephi();
    int k=1;
    phisum[1]=0;
   for(ll i=2;i<=5000005;i++) phisum[i]=((unsigned long long) phi[i]* (unsigned long long) phi[i])+phisum[i-1];

   //for(int i=1;i<=10;i++) cout<<phi[i]<<" "<<phisum[i]<<endl;
    ll tc;cin>>tc;while(tc--)
    {
        ll a,b;cin>>a>>b;
        case;k++;
        unsigned long long res=phisum[b]-phisum[a-1];
          cout<<res<<endl;
    }
    return 0;
}
