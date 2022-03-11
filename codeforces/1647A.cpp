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
  ll n;
  cin>>n;
  ll sum =0;
  vector<ll>v,v1;
  ll f = true;
  
  while(true)
    {
      if(f)
      { 
       sum +=1;
	//    cout<<sum;
        v.push_back(1);
		f=false;
        }
      else 
      { 
		  f = true;
        sum+=2;
		// cout<<sum;
      v.push_back(2);
        }
		if(sum>=n)
		{
			break;
		}
    }
//  cout<<sum;
  if(n==sum)
  {
	  reverse(v.begin(),v.end());
    for(auto i:v)
      {
        cout<<i;
      }
	  cout<<endl;
  }
  else
  {
	  sum =0;
     while(true)
    {
      if(f)
      { 
       sum +=2;
        v1.push_back(2);
		f = false;
        }
      else 
      { 
		  f = true;
        sum+=1;
      v1.push_back(1);
        }

		if(sum>=n)
		{
			break;
		}
    }
    if(sum==n)
  {
	  reverse(v1.begin(),v1.end());
    for(auto i:v1)
      {
        cout<<i;
      }
	  cout<<endl;
  }
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
  
 
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  
  return 0;
}
