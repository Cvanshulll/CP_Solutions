#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void Solve() {
  ll n,m;
  cin>>n>>m;
  ll a[n];
  
  for(int i =0; i<n;i++)
  {
    cin>>a[i];
  
  }
  
  sort(a,a+n);
  ll sum =0;
  
  for(int i =0; i<m;i++)
  {
    if(a[i]<=0)
    {
    int z=abs(a[i]);
    sum = sum+z;
    }
   
   
  }
  cout<<sum<<'\n';
}
 
 
int main()
{
  // int t;
  // cin>>t;
  // while(t--)
  // {
    Solve();
  
 
}
