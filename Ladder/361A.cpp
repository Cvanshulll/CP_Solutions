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
   ll n,k;
   cin>>n>>k;
   ll a[n][n];
   for(int i =0; i<n; i++)
   {
     for(int j=0; j<n; j++)
     {
       if(i==j)
       {
         a[i][j]=k;
       }
       else 
       {
         a[i][j]=0;
       }
     }
   }
   // print
   for(int i =0; i<n; i++)
   {
     for(int j=0; j<n; j++)
     {
       cout<<a[i][j]<<" ";
     }
     cout<<'\n';
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
