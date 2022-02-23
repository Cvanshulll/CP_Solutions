#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(v) begin(v), end(v)
 
 
 
  // cin.getline(s,len);
  // getline(cin,s);
 
 
//   void display(int a[], int n)
//  {
//      for (int i = 0; i < n; i++) {
//          cout << a[i] << "  ";
//      }
//         cout << endl;
//  }
 
 
void solve()
{
  ll n;
  cin>>n;
  vector<ll>v;
  vector<vector<ll>>ans;
  ans.push_back(v);
  for(int i = n; i>0; i--)
    {
      v.push_back(i);
    }
  for (int i = 0; i < n; i++) {
    for(auto val : v)
      {
        cout << val << ' ';
      }
      cout << '\n';
      if(i != n - 1)
        swap(v[0], v[i + 1]);
    }
}
 
  
 
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
