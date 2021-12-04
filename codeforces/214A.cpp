#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Solve() {
  ll n , m;
  cin>>n>>m;
  ll a=0, b, c=0;
  while(a*a<=n)
  {
    b= n-a*a;
    if((b*b)+a == m)
    {
      c++;
    }
    a++;
  }
   

cout<<c<<endl;
}


int main()
{
  // int t;
  // cin>>t;
  // while(t--)
  // {
    Solve();
  // }
  
 
}
