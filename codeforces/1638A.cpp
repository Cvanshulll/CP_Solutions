#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(v) begin(v), end(v)
 
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
   ll t;
   cin>>t;
   while(t--)
   {
     ll n;
     cin>>n;
     vector<int>v(n);
     for(int i =0; i<n; i++)
     {
       cin>>v[i];
     }
     if(!is_sorted(all(v)))
     { 
      int l=-1, r=-1;

     for(int i =0; i<n; i++)
     {
       if(v[i]!=i+1)
       {
         l =i;
         for(int j=i+1; j<n ; j++)
         {
           if(v[j]==i+1)
           {
             r = j;
             break;
           }
         }
         break;
       }
     }
    //  cout<<l<<r;
     reverse(v.begin()+l,v.begin()+r+1);
     }
     for(auto x:v)
     {
       cout<<x<<" ";
     }
     cout<<endl;
    
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
