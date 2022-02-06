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
  for(int i =0; i<n ; i++)
  {
    cin>>a[i];
    if(a[i]==1)
    {
      cout<<"HARD"<<'\n';
      return 0;
    }
  }
  cout<<"EASY"<<'\n';


  return 0;
}

