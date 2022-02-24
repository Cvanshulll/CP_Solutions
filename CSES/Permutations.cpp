#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;


int main()
{
  ll n;
  cin>>n;
  vector<ll>v;
  if( n==2||n==3)
  {
    cout<<"NO SOLUTION"<<endl;
  }
  else
  {
    if(n%2==0)
    { 
    for(int i =2; i<=n ; i+=2)
      { 
        {
            v.push_back(i);
        }
      }
    for(int i =1; i<=n-1; i+=2)
      { 
        {
            v.push_back(i);
        }
      }
      }
    else
    {
      for(int i =1; i<=n; i+=2)
      { 
        {
            v.push_back(i);
        }
      }
    for(int i =2; i<=n-1; i+=2)
      { 
        {
            v.push_back(i);
        }
      }
    }
  }
  for(auto z:v)
    {
      cout<<z<<" ";
    }
  cout<<endl;
  
  return 0;
}

