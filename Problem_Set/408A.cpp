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
  ll a[n];
  for(int i =0; i<n ; i++)
    {
      cin>>a[i];
    }
  vector<int>v;
  for(int i =0; i<n ; i++)
    {
      ll x = a[i];
      ll p[x];
      ll sum =0;
	  ll c=0;
      for(int j =0; j<x; j++)
        {
          cin>>p[j];
        c++;
          sum += (p[j]*5);
        }
		sum+= c*15;
      v.push_back(sum);
	//   cout<<sum<<" ";
	  c=0;
      sum =0;
    }
  
  ll mini = INT_MAX;
  // ll ind =0;
  for(auto i:v)
  {
	  if(i<mini)
	  {
		  mini = i;
	  }
  }
  cout<<mini<<endl;
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

