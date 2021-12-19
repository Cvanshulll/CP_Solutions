#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Solve() {
  ll k;
  cin >>k;
  ll n =12;
  ll a[n];
  ll s =0;
  for(int i =0; i<n; i++)
  {
    cin>>a[i];  
  }
   sort(a,a+n);
   for(int i =n-1; i>=0; i--)
  {
    s+=a[i];  
    // cout<<s<<" ";
  }
  // possible cases
  if(s<k)
  {
    cout<<"-1"<<'\n';
  }
  
  else if(k==0)
  {
    cout<<"0"<<'\n';
  }
  else
   {
  ll c=0;
  ll sum =0;
 
  for(int i=11; i>=0; i--)
  {
    c++;
    sum += a[i];
    // cout<<sum<<" ";
    if(sum>=k)
    {
      break;
    }
  }
  cout<<c<<'\n';
   }
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
