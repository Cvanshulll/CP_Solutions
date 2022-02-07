#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;


// #define m =10e
int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
  // const unsigned int M = 1000000007;
  
  ll n;
  cin>>n;
  ll a[n];
  ll sum =0;
  for(int i =0; i<n-1 ; i++)
  {
    cin>>a[i];
    sum+=a[i];
  }
  ll tot = n*(n+1)/2;
  cout<<tot-sum<<endl;
  return 0;
}

