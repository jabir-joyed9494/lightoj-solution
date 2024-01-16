#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define case  cout<<"Case "<<k<<": ";
double aray[1000000];
void countofdigit()
{
    for(int i=2;i<=1000000;i++)
    {
        aray[i]=log10(i)+aray[i-1];
        //cout<<aray[i]<<" ";
    }
}
int main()
{
    countofdigit();
    aray[0]=0;
    int k=1;
    int tc;cin>>tc;while(tc--)
    {
        ll n,base;
        cin>>n>>base;
        case;k++;
        cout<<((int)((aray[n])/(log10(base))))+1<<endl;
    }
    return 0;
}
