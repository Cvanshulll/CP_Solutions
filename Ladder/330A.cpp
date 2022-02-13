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
   ll r,c;
   cin>>r>>c;
   ll c1=0,c2=0;
   string s[r+3];
   for(int i=0; i<r; i++)
   { 
        cin >> s[i];
   }
   for(int i=0;i<r; i++)
   {
    for(int j=0; j<c; j++)
    {
      if(s[i][j]=='S')
      {
        c1++;
        break;
      }
    }

   }

    for(int i=0;i<c; i++)
   {
    for(int j=0; j<r; j++)
    {
      if(s[j][i]=='S')
      {
        c2++;
        break;
      }
    }
   }
   cout<<(r*c)-(c1*c2)<<endl;
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
