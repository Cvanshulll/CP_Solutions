#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll t;
  cin>>t;
  
  
  while(t--)
  {
  //   ll c=0;
  //   ll n,l,r,k;
  //   cin>>n>>l>>r>>k;
  //   int a[n];
  //   ll sum=0;
  //   for(int i=0; i<n ;i++)
  //   {
  //     cin>>a[i];
  //     if(a[i]<=r && a[i]>=l && sum+a[i]<=k)
  //     {
  //       c++;
  //       sum+=a[i];
      
  //     }
  //   }
  //   cout<<c<<"\n";
  // }

   ll i,j,n,l,r,k;
        cin>>n>>l>>r>>k;
 
        vector<ll>v(n);
 
        for(i=0;i<n;i++)
        cin>>v[i];
 
        sort(v.begin(),v.end());
        ll ans=0;
 
        for(i=0;i<n;i++)
        {
            if(v[i]<=r and v[i]>=l and v[i]<=k)
            {
                ans++;
                k-=v[i];
            }

        }
         cout<<ans<<'\n';
  }

       
}
