#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
 
bool checkPalindrome(string s)
{
  int st = 0;
  int e = s.size();
  while(st<=e)
  {
    if(s[st]!=s[e])
    {
      return false;
    }
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
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n];
    ll sum=0;
    for(int i =0; i<n ; i++)
    {
      cin>>a[i];
      sum+=a[i];
    }
    
    // even/odd + __E/O__ -> even  || even/odd + __O__ -> Odd/Even
    if( (x%2 == y%2 && sum%2==0) || (x%2 != y%2 && sum%2) )
    {
      cout<<"Alice"<<endl;
    }
    else 
    {
      cout<<"Bob"<<endl;
    }
  }
  return 0;
}
 
