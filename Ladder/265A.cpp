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
  string s1,s2;
  cin>>s1>>s2;
  
  ll i1 = 0;
  ll i2 = 0;
  while(i2<s2.size())
  {
    if(s1[i1]==s2[i2])
    {
      i1++;
      i2++;
    }
    else 
    {
      i2++;
    }
  }
  cout<<i1+1<<endl;
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
 
