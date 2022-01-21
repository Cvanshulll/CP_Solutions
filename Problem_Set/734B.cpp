/*
  We will act greedily.
  At first we'll make maximal possible amount of 256 numbers.
  It will be equal to . From the rest of the digits we'll make maximal possible amount of 32 numbers.
  It will be equal to  (we use k2 - n256 instead of k2, because n256 twos we've already used to make 256 numbers.
  Now it's not hard to observe that the answer will be equal to  .

  Time complexity is O(1).
*/



#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;


int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll a ,c,d,e;
    cin>>a>>c>>d>>e;
    ll b = min(a,min(d,e));
  
    ll s = min(c,a-b);
    ll res = (s*32)+(b*256);
    cout<<res<<'\n';
    return 0;
}
    
