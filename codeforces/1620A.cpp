#include<bits/stdc++.h>  ///iostream 
using namespace  std;
typedef long long ll;
#define   fo(i,a,b)     for(int i=a;i<b;++i)
 
int main()
{
    long long  t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int n=0,e=0;
      int tot = s.size();
      for(int i =0; i<tot ; i++)
      {
        if(s[i]=='N')
        {
          n++;
        }
        else{
          e++;
        }
      }
      if(n==1)
      {
        cout<<"NO"<<endl;
      }
      else
      {
        cout<<"YES"<<endl;
      }
 
 
    }
}
