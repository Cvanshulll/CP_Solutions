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
  ll a[n];
  for(int i =0; i<n ; i++)
    {
      cin>>a[i];
    }
  sort(a,a+n);
  
  

  ll i=1,j=n-1;
  ll cr=0,cb=1,blue=a[0],red=0;
  while(i<j)
    {
      blue+=a[i];
      cb++;
      red +=a[j];
      cr++;
      if(cr<cb && red>blue)
      {
        // cout<<red<<" "<<blue;
        cout<<"YES"<<endl; return ;
      }
      i++;j--;
    }
  cout<<"NO"<<endl;
  
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
  
 
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  
  return 0;
}
