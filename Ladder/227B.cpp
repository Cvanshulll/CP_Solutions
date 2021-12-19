#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    map<ll,ll>mp;
    for(int i =1; i<=t ; i++)   // map storing
    {
      ll n;
        cin>>n;
        mp[n]=i;
    }
    ll q;
    ll sum =0;
    cin>>q;
  
    for(int i =1; i<=q ; i++)
    {
      ll n ;
        cin>>n;
        sum+=mp[n];
    }
    cout<<sum<<" "<<q*(t+1)-sum<<'\n';
    return 0;
}
