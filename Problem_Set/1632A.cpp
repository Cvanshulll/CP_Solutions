#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(v) begin(v), end(v)
 


  // cin.getline(s,len);
  // getline(cin,s);

void solve()
{
  ll n;
  cin>>n;
  string s;
  cin>>s;
  
  if(n>2 || s=="00"||s=="11")
  {
    
    cout<<"NO"<<endl;
    
  }
  else 
  {
    cout<<"YES"<<endl;
  }

 
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
