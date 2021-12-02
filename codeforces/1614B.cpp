#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void Solve() {
  
      ll n ;
      cin>>n;
      vector<pair<ll,ll>>v(n);
      for(int i =0; i<n ; i++)
      {
        ll x;
        cin>>x;
        v[i].first=x,v[i].second=i;
      }
      sort(v.rbegin(),v.rend());
      vector<ll>ans(n);
      ll mid =(n+2)/2;// hq
      ll res =0;
      ll left = mid-1, right = mid+1;
      bool isleft =1;
      for(int i =0; i<n ; i++)
      {
        ll idx = v[i].second;
        ll cnt = v[i].first;
        if(isleft)
        {
          ans[idx]=left;
          ll cost = 2*(mid-left);
          res+=cnt*cost;
          left--;
          isleft =0;
        }
        else
        {
          ans[idx]=right;
          ll cost = 2*(right-mid);
          res+=cnt*cost;
          right++;
          isleft = 1;
        }
      }
       cout<<res<<endl;
   cout<<mid<<" ";
   for(ll x:ans) cout<<x<<" ";
}
 
 
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    Solve();
  }
 
}
