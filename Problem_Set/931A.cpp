#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;


bool isPrime(int n)
{
    // Corner case
    if (n == 1)
        return true;
        if(n<1)
        {
          return false;
        }
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // ll n ,m;
    // cin>>n>>m;
    // string s[n],t[m];
    // unordered_map<string,int>mp;
    // for(int i =0; i<n ; i++)
    // {
    //   cin>>s[i];
    // }
    // for(int i =0; i<m ; i++)
    // {
    //   cin>>t[i];
    //   mp[t[i]]=i;
    // }
    // for(int i =0; i<n ; i++)
    // {
    //   string v = s[i];
    //   if(mp.count(v)>0)
    //   {
    //     cout<<"Yes"<<endl;
    //   }
    //   else 
    //   {
    //     cout<<"No"<<endl;
    //   }
    // }

  ll a,b;
  cin>>a>>b;
  int s = abs(a-b);
  if(s==0)
  {
    cout<<"0"<<endl;
  }
  else if(s==1)
  {
    cout<<"1"<<endl;
  }
  else if(s==2)
  {
    cout<<"2"<<endl;
  }
  else
  {
    ll sum =0;
     ll ca = s/2;
    for(int i =1;i <=ca; i++)
    {
      sum+=i;
    }
    ll cb = s-ca;
    for(int i =1;i <=cb; i++)
    {
      sum+=i;
    }
    cout<<sum<<'\n';
  }

  return 0;
}
    
