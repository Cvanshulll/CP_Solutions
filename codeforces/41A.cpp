#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Solve() {
  string s,t;
  cin>>s>>t;

  if(s.size()!=t.size())
  {
    cout<<"NO"<<endl;
    return ;
  }
  int i =0,j=t.size()-1;
  while(i<s.size())
  {
    if(t[j]!=s[i])
    {
      // cout<<t[j]<<" "<<s[i]<<" ";
      cout<<"NO"<<'\n';
      break;
    }
    
      j--;
      i++;
    
  }
  if(i==s.size())
  {
    cout<<"YES"<<'\n';
  }
  

}


int main()
{
  Solve();
}
