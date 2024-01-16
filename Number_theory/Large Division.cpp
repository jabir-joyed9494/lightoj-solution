#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i=1;
    int tc;cin>>tc;while(tc--)
    {
        string a;cin>>a;
        int b;cin>>b;if(b<0)abs(b);
        cout<<"Case "<<i<<": ";i++;
        ll int rim=0,j=0;
        if(a[0]=='-')j=1;
        for(;j<a.size();j++)
        {
            rim=rim*10+(a[j]-'0');
            rim=rim%b;
            //cout<<"rim="<<rim<<endl;
            //cout<<"j="<<j<<endl;
        }
        if(rim==0) cout<<"divisible"<<endl;
        else cout<<"not divisible"<<endl;
    }
    return 0;
}
