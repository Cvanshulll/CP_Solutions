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
  ll x =0;
  ll a[n];
  ll mx = INT_MIN;
  ll sum =0;
  for(int i=0; i<n ; i++)
    {
      cin>>a[i];
      while(a[i]%2==0)
        {
          x++;
          a[i]/=2;
        }
      mx = max(mx,a[i]);
      sum+=a[i];
    }
  sum -=mx;
  cout<<((ll)pow(2,x)*mx)+sum<<endl;
  
 return ;
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
