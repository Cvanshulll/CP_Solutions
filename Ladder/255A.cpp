#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
 
bool checkPalindrome(string s)
{
  int st = 0;
  int e = s.size()-1;
  while(st<=e)
  {
    if(s[st]!=s[e])
    {
      return false;
    }
    st++; e--;
  }
  return true;
}



void solve ()
{
  ll n;
  cin>>n;
  ll chest =0,biceps=0,back=0;
  ll a[n];
  for(int i =0; i<n; i++)
  {
    cin>>a[i];
  }
  
  for(int i =0; i<n; i+=3)
  {
    chest+=a[i];
  }
  for(int i =1; i<n; i+=3)
  {
    biceps+=a[i];
  }
  for(int i =2; i<n; i+=3)
  {
    back+=a[i];
  }
  if(chest>biceps && chest>back)
  {
    cout<<"chest"<<endl;
  }
  else if(chest<biceps && biceps>back )
  {
    cout<<"biceps"<<endl;
  }
  else if(chest<back && biceps<back)
  {
    cout<<"back"<<endl;
  }
  
  
}
// #define m =10e
int main()
{
 
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
  // const unsigned int M = 1000000007;
  

  // ll t;
  // cin>>t;
  // while(t--)
  // {
    solve();
  // }
  

  return 0;
}
 
