#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;

#define YES    cout<<"YES\n";
#define NO     cout<<"NO\n";
#define Yes    cout<<"Yes\n";
#define No     cout<<"No\n";
#define all(v) begin(v), end(v)

  // cin.getline(s,len);
  // getline(cin,s);

// ___________________********___________________________



void solve ()
{
  ll n,d;
  cin>>n>>d;
  ll a[n];
  if(n==1 && d==5)
  {
    cout<<0<<endl;
    return ;
  }
  for(int i =0; i<n ; i++)
    {
      cin>>a[i];
      }
  ll sum =0,c=0;
  for(int i =0; i<n ; i++)
    {
      
      sum+=a[i];
        if(sum>d)
        {
          cout<<-1<<endl;
          return;
        }
        if(sum ==d)
        {
          cout<<c<<endl;
          return ;
        }
      sum+=10;
      c+=2;
     
    }
  while(sum<d)
  {
    c+=1;
    sum +=5;
  }
  if(sum>d)
    {
      cout<<c-1<<endl;
      return ;
    }
  else if(sum ==d)
    {
      cout<<c<<endl;
      return ;
    }
  
  
  
 return ;
}

// ___________________********___________________________
 
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

