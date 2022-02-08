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

  ll x,n;
  cin>>x>>n;
  if(n==0)
  {
    cout<<x<<endl;
    return ;
  }
  ll jump = n-1;
  ll c = jump/4;
  ll r = jump%4;
  ll ans =x;
  if(x%2==0)
  {
    ans -=1;
    ans -= (c*4);
    if(r ==1 )
    {
      ans += n;
    }
    else if( r ==2)
    {
      ans += n+n-1;
    }
    else if(r ==3)
    {
      ans += n-2+n-1-n;
    }
  }
  else 
  {
    ans += 1;
    ans += (c*4);
    if(r ==1)
    {
      ans -= n;
    }
    else if(r ==2 )
    {
      ans -= n+n-1;
    }
    else if( r== 3)
    {
      ans -= n-2+n-1-n;
    }
  }
  cout<<ans<<endl;
  
}
// #define m =10e
int main(){
 
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
  // const unsigned int M = 1000000007;
  

  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  
  

  return 0;
}
 
