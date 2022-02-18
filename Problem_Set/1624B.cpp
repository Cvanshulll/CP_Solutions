#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(v) begin(v), end(v)
 


  // cin.getline(s,len);
  // getline(cin,s);

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
   
  ll a,b,c;
  cin>>a>>b>>c;
  
  if((b-a)==(c-b))
  {
    cout<<"YES"<<endl;  
  }
  else if((2*b-c)>0 && (2*b-c)%a==0)
  {  
   
    cout<<"YES"<<endl;
   
  } 
  else if((2*b-a)>0 && (2*b-a)%c==0)
  {  
    cout<<"YES"<<endl;
  }
  else if((c+a)%(2*b)==0)
  {
    cout<<"YES"<<endl;
  }
  else { 
    cout<<"NO"<<endl;
    }
  
}

// 10
// 9 6 1 8 3 9 7 5 10 4
// 7 1 3 2 7 6 9 5
 
 
// #define m =10e
int main()
{
 
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
  // const unsigned int M = 1000000007;
  
 
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  
  return 0;
}
