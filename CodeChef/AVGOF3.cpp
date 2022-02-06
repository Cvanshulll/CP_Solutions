#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;



int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


    
        ll t;
        cin>>t;
        while(t--)
        {
          ll x;
          cin>>x;
          ll g = 3*x;
          int f = g/3;
          int s = g-f-3;
          if(s==f)
          {
            s-=2;
          }
          cout<<f<<" "<<s<<" "<<g-(f+s)<<endl;
         

        }
         return 0;
}
    
