#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define YES    cout<<"YES\n";
#define NO     cout<<"NO\n";
#define Yes    cout<<"Yes\n";
#define No     cout<<"No\n";
#define all(v) begin(v), end(v)

void cvanshul()
{
    ll y,x;
        cin>>y>>x;
        if(x<y)
        {
            if(y%2==0) cout<<y*y-x+1;
            else cout<<(y-1)*(y-1)+x;
        }
        else
        {
            if(x%2==1) cout<<x*x-y+1;
            else cout<<(x-1)*(x-1)+y;
        }
        cout<<"\n";
}

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
    cvanshul();
  }

  // cvanshul();


    return 0;
}