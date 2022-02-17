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
   
  string s;
  // cin.getline(s,len);
  getline(cin,s);
  ll i =0;
  set<char>st;
  while(i<s.size())
  {
    if(s[i]>='a'&& s[i]<='z')
    {
      // cout<<s[i]<<" ";
      st.insert(s[i]);
    }
    i++;
  }
  cout<<st.size();
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
