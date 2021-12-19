#include<bits/stdc++.h>
#include<algorithm>
typedef long long  ll;
using namespace std;


int main()
{
  // ll t;
  // cin>>t;
  // while(t--)
  // {
     string s;
  cin >> s;
  ll len = s.size();
 
  ll n=0, m=0;
  bool ans=false;
  for (int i=0; i<len; i++) {
    if(s[i]=='0'){
      n++;
      m=0;
    }else{
      n=0;
      m++;
    }
    if(n>=7 || m>=7){
      ans=true;
      break;
    }
  }
  cout<<(ans?"YES":"NO")<<endl;
  
  return 0;
}
