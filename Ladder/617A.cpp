#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(v) begin(v), end(v)
 
 
 
  // cin.getline(s,len);
  // getline(cin,s);
 
 
void solve ()
{
  ll n ;
  cin>>n;
  // if(n<=5)
  // {
  //   cout<<"1"<<endl;
  // }
  // else 
  // {
    ll r = n/5;
    if((r*5)<n)
    {
      cout<<r+1<<endl;
    }
    else 
    {
      cout<<r<<endl;
    }
  // }
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
  
 
  // ll t;
  // cin>>t;
  // while(t--)
  // {
    solve();
  // }
  
  return 0;
}
