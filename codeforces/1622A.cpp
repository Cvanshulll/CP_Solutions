#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      
    vector <ll> a(3);cin>>a[0]>>a[1]>>a[2];

    sort(a.begin(),a.end());  // ** SAVIOUR 

    if(a[2]==(a[1]+a[0])) 
      cout<<"YES\n";
    else if (a[0]==a[1])
    {
        if(a[2]%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else if(a[1]==a[2])
    {
        if(a[0]%2==0)
         cout<<"YES\n";
        else
         cout<<"NO\n";
    }
    else
     cout<<"NO\n";
    }
  return 0;
}
