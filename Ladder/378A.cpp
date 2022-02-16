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
   
  ll a,b;
  cin>>a>>b;
  ll f=0,d=0,s=0;
  for(int i =1; i<=6; i++)
  {
    if(abs(a-i)<abs(b-i)) f++;
    if(abs(a-i)==abs(b-i)) d++;
    if(abs(a-i)>abs(b-i)) s++;
  }
  cout<<f<<" "<<d<<" "<<s<<"\n";
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
