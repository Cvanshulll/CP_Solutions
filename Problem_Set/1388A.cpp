#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;


int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--)
    {
      int n ;
      cin>>n;
      if(n<=30)
      {
        cout<<"NO"<<endl;
      }
      else 
      {
        cout<<"YES"<<endl;
        if(n == 36 || n == 40 || n == 44)
        {
          cout << 6 << ' ' << 10 << ' ' << 15 << ' ' << n - 31 << endl;
        }
        else 
        {
          cout << 6 << ' ' << 10 << ' ' << 14 << ' ' << n - 30 << endl;
        }
      }
    }
    return 0;
}
    
