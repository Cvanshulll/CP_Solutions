#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(v) begin(v), end(v)
 
 
 
  // cin.getline(s,len);
  // getline(cin,s);
 
 
void solve ()
{
  ll n, m;
  cin>>n>>m;
  ll i =1;
  ll flag =0;
  while(i<=n)
    {
      if(i%2 !=0)
      {
        for(int i =0; i<m ; i++)
          {
            cout<<"#";
          }
        cout<<endl;
      }
      else 
      {
        if(flag ==0){ 
        for(int i =0; i<m-1; i++)
          {
            cout<<".";
          }
        cout<<"#"<<endl;
          flag =1;
          }
        else 
        {
          cout<<"#";
          for(int i =0; i<m-1; i++)
          {
            cout<<".";
          }
        cout<<endl;
          flag =0;
        }
      }
      i++;
    }
  cout<<endl;
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
