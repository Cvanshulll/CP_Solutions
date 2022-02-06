#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;

long long gcd_sum(long long n)
{ 
        ll tot = n;
        ll ans =0;
        while(n>0)
        {
          ll r = n%10;
          // cout<<r;
          ans +=r;
          // cout<<ans;
          n=n/10;
        }  
        long long int gcd = __gcd(tot, ans);
        return gcd;
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    
        ll t;
        cin>>t;
        while(t--)
        {
          int x,y,z;
          cin>>x>>y>>z;
          ll b = x*y;
          ll s = x*z;
          cout<<(s-b)<<endl;
   
        }
         return 0;
}
    
