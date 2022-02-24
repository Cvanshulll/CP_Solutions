#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;


int main()
{
  ll n;
  cin>>n;
  vector<ll>a(n);
  
  for(int i =0; i<n; i++)
    {
      cin>>a[i];
    }
  ll sum =0;
  for(int i =0; i<n-1; i++)
    {
      if(a[i]>a[i+1])
      {
        // cout<<a[i]<<" "<<a[i+1]<<" \n";
        ll d = a[i]-a[i+1];
        // cout<<d<<" ";
        sum+=d;
        a[i+1]+=d;
      }
    }
    cout<<sum;
  cout<<endl;
  
  return 0;
}

