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
 
 
    ll n,k;
    cin>>n>>k;
    string s ;
    n = s.size();
    cin>>s;
  
    if(checkPalindrome(s) )
    {
      cout<<"1"<<endl;
    }
    else 
    {
      if(k==0)
      {
        cout<<"1"<<endl;
      }
      else 
      {
        cout<<"2"<<endl;
      }
    }
  }
 
  return 0;
}
 
