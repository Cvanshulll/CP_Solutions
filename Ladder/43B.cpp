#include<bits/stdc++.h>
using namespace std; 

int main()
{
  string s1,s2;
  getline(cin,s1);
  getline(cin,s2);
  map<char, int>mp1,mp2;
  for(int i =0; i<s1.size(); i++)
  {
    if(s1[i]!=' ')
    mp1[s1[i]]++;
  }
  bool ok = true;
  for(int i =0; i<s2.size(); i++)
  {
    if(s2[i]!=' ')
    mp2[s2[i]]++;
  }
  for(int i =0; i<s2.size(); i++)
  {
    if(mp2[s2[i]]>mp1[s2[i]])
    {
      ok = false;
      break;
    }
  }
  if(ok)
  {
    cout<<"YES"<<endl;
  }
  else 
  {
    cout<<"NO"<<endl;
  }

  return 0;
}
