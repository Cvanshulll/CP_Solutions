#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;


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

    ll t;
    cin>>t;
    while(t--)
    {
        int b,p,f,h,c;
        cin>>b>>p>>f>>h>>c;
        b/=2;
        int ans=0;
        if(h>c){
            ans+=min(p,b)*h;
            b=max(b-p,0);
            ans+=min(f,b)*c;
        }
        else{
            ans+=min(f,b)*c;
            b=max(b-f,0);
            ans+=min(p,b)*h;
        }
        cout<<ans<<endl;
    }

    return 0;
}
    
