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
  string s ;
  cin>>s;
  ll sum =1;
  ll ans=1 ;
  char v =s[0];
  for(int i =1; i<s.size(); i++)
  {
    if(s[i]==v)
    {
      sum++;
    }
    else
    {
      v= s[i];
      sum =1;
    }
    ans=   max(ans,sum);
      // cout<<ans<<endl;

  }
  cout<<ans<<endl;
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
 