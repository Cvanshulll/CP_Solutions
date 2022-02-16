#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(v) begin(v), end(v)
 
bool checkPalindrome(string s)
{
  int st = 0;
  int e = s.size()-1;
  while(st<=e)
  {
    if(s[st]!=s[e])
    {
      return false;
    }
    st++; e--;
  }
  return true;
}
 
 
void solve ()
{
   
  ll n,k;
  cin>>n>>k;
  ll a[n],c=0;
  k = 5-k;
  for(int i =0; i<n ; i++)
  {
    cin>>a[i];
    // 0 4 5 1 0 
  }
  ll ans =0;
  for(int i =0; i<n ; i++)
  {
    
    if(a[i]<=k)
    {
      c++;
      if(c==3)
      {
        ans++;
        c=0;
      }
    }
    
  }

  // cout<<c;
 
    cout<<ans<<'\n';

  return;
}
 
 
// #define m =10e
int main()
{
 
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
  // const unsigned int M = 1000000007;
  
 
  // ll t;
  // cin>>t;
  // while(t--)
  // {
    solve();
  // }
  
  return 0;
}
