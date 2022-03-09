#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(v) begin(v), end(v)
 
 
 
  // cin.getline(s,len);
  // getline(cin,s);
 
 
void solve ()
{
  ll n;
  cin>>n;
  // string s = to_string(n);
  // ll sz = s.size();
  if(n==(-10))
  {
    cout<<"0"<<endl;
    return ;
  }
  if(n>=0)
  {
    cout<<n<<endl;
  }
  else 
  {
    n = abs(n);
    ll a = n%10;
    n/=10;
    ll b = n%10;
    n/=10;
    n*=10;
    if(a>b)
    {
      n+=b;
    }
    else 
    {
      n+=a;
    }
    n*=-1;
    cout<<n<<endl;
    
    
    // if(r>r1)
    // {
      // cout<<r<<endl;
   
  }
 return ;
  }
 
// 10
// 14 15 15 15 19 16 14 18 16 10

 
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
