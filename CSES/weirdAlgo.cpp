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
  vector<ll>v;
  v.push_back(n);
  while(n>1)
  { 
    if(n%2 == 0 ) //even 
    {
      n = n/2;
      v.push_back(n);
    }
    else
    {
      n = (n*3)+1;
      v.push_back(n);
    }
  }
  for(auto x: v)
  {
    cout<<x<<" ";
  }
  
  return 0;
}

