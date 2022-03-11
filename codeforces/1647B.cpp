#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;

#define YES    cout<<"YES\n";
#define NO     cout<<"NO\n";
#define Yes    cout<<"Yes\n";
#define No     cout<<"No\n";
#define all(v) begin(v), end(v)

  // cin.getline(s,len);
  // getline(cin,s);

// ___________________********___________________________



void solve ()
{
  ll n,m;
  cin>>n>>m;
  vector<string> v(n);
  bool f =true;
  for(int i =0; i<n; i++)
    {
      cin>>v[i];
    }
  
  for(int i =0; i<n-1; i++)
    {
      for(int j =0; j<m-1; j++)
        {
          ll sum =0;
          sum = (v[i][j]-'0')+(v[i+1][j]-'0')+(v[i][j+1]-'0')+(v[i+1][j+1]-'0');
          if(sum ==3)
          {
            f=false;
            break;
          }
        }
    }
  if(f)
  {
    YES;
  }
  else 
  {
    NO;
  }
 return ;
  }

// ___________________********___________________________
 
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
