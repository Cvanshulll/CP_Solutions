#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(v) begin(v), end(v)
 


  // cin.getline(s,len);
  // getline(cin,s);

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
   vector<ll>v(k);
   
   for(int i =0; i<k; i++)
   {
     cin>>v[i];
    
   } 
   sort(v.begin(),v.end());
   ll ans =0,cat=0;
   for(int i =k-1; i>=0 ; i--)
   {
    
    ll mice = v[i];
    if(mice<=cat)
      break;
    
    ll d = n-mice;
    cat+=d;
    ans++;   
   }
  cout<<ans<<endl;
}

// 10
// 9 6 1 8 3 9 7 5 10 4
// 7 1 3 2 7 6 9 5
 
 
// #define m =10e
int main()
{
 
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
