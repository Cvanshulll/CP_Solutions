#include<bits/stdc++.h>
using namespace std; 

int main()
{
  int x , y;
  cin>>x>>y;
  int  c =0;
  while(x<y)
  {
    x +=10;
    c++;
  }
  cout<<c<<endl;
  return 0;
}
