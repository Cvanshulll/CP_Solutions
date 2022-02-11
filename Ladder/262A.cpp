#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
 
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
  ll a[n];
  ll c=0;
 
  for(int i =0; i<n; i++)
  {
    ll c1 =0;
    cin>>a[i];
    ll x = a[i];
    while(x!=0)
    {
      ll r = x%10;
      if(r ==4 || r ==7)
      {
        c1++;
      }
      x/=10;
    }
    if(c1>k)
    {
      c++;
    }
  }
  cout<<n-c<<endl;
  
 
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
 
