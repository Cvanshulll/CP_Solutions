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
  ll n;
  cin>>n;
  ll a[n+1];
  ll slope[n];
  for(int i =0; i<n ; i++)
  {
    cin>>a[i];
  }
  a[n] = 0;
  
  for(int i =1; i<n ; i++)
  {
    if(a[i]>a[i-1])
    {
      slope[i]=1;
    }
    else if(a[i]==a[i-1])
    {
      slope[i]=0;
    }
    else
    {
      slope[i]=-1;
    }
  }

  ll c =0;

  for(int i =1; i<n-1; i++)
  {
    if(a[i] > a[i-1])	
    {
    	slope[i] = 1;
    } 
    else if(a[i] == a[i-1])	
    {
    	slope[i] = 0;
    }
    else 
    {
    	slope[i] = -1;
    }
    if(slope[i]==1 && slope[i+1]==-1)
    {
      a[i+1]=max(a[i],a[i+2]);
      c++;
    }
  }
  cout<<c<<endl;
  for(int i =0; i<n ; i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
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
