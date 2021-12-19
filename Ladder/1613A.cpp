#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Solve() {
  string x1;
  cin>>x1;
    ll p1;
    cin>>p1;
    string x2;
    cin>>x2;
    ll p2;
    cin>>p2;
    if(x1.size()+p1==x2.size()+p2)
    {
      while(x1.size()>x2.size())x2+='0';
      while(x1.size()<x2.size())x1+='0';
      if(x1==x2)cout<<"="<<endl;
      else if(x1>x2)cout<<">"<<endl;
      else cout<<"<"<<endl;
    }
    else
    {
      if(x1.size()+p1>x2.size()+p2)cout<<">"<<endl;
      else cout<<"<"<<endl;
    }


  
}


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    Solve();
  }
  
 
}
