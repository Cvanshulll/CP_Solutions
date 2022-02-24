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
  ll x1,y1,x2,y2,x3,y3;
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  if((y1==y2 && y3<y1 )|| (y1==y3 && y2<y1)||(y2==y3 && y1<y2))
    {
      if(y1==y2)
        cout<<abs(x1-x2)<<endl;
      else if(y1==y3)
        cout<<abs(x1-x3)<<endl;
      else if(y3==y2)
        cout<<abs(x3-x2)<<endl;
    }
  else 
  {
    cout<<"0"<<endl;
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
