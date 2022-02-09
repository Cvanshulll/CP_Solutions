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
  ll n;
  cin>>n;
  ll c=0;
  
  while(n)
  {
    ll r = n%10;
    if(r==4 || r==7)
    {
      c++;
    }
    
    n/=10;
  }
  if(c==4||c==7)
   cout<<"YES"<<endl;
  else
   cout<<"NO"<<endl;
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
 
