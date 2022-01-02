#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
  ll n;
  cin>>n;
  ll a[n];
  ll sum =0;
  for(int i =0; i<n ; i++)
  {
    cin>>a[i];
    sum+=a[i];
  }
  if(sum%n ==0)
  {
    cout<<n;
  }
  else
  {
    cout<<n-1;
  }
  return 0;
}
