#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(v) begin(v), end(v)
 
 
 
  // cin.getline(s,len);
  // getline(cin,s);
 
 
void solve ()
{
  ll n,k;
  cin>>n>>k;
  
  if(k/n<=2&&k%n==0)
  {
    cout<<n<<endl;
  }
  else if(k/n>2)
  {
    cout<<"0"<<endl;
  }
  else if(k/n==2&&k%n!=0)
  {
    cout<<n-k%n<<endl;
  }
  else if(k/n==1 && k%n!=0)
  {
    cout<<n-(n-k%n)<<endl;
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
