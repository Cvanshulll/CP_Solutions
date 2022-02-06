#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;


// #define m =10e
int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


    
  ll t;
  cin>>t;
  while(t--)
  {
    ll p;
    cin>>p;
    p = p/2;

    // for(int i =0; i<=p; i++)
    // {
    //   if(i%2==0)
    //   {
    //     c++;
    //   }
    // }
    cout<<p+1<<"\n";
  }
  
  return 0;
}

