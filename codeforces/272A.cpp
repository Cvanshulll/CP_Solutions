#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    for(int i =0; i<n ; i++)
    {
      ll t ;
      cin>>t;
      sum+=t;
    }
    ll c=0;
    for(int i =1; i<6;i++)
    {
      if((sum+i)%(n+1)!=1)
      {
        c++;
      }
    }
    cout<<c<<'\n';
    return 0;
}

// int main() {
//     covid19
//     int n;
//     cin >> n;
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin >> x;
//         sum+=x;
//     }
//     int cnt=0;
//     for(int i=1;i<6;i++)
//     {
//         if((sum+i)%(n+1)!=1) {
//             cnt++;
 
//         }
//     }
//     cout << cnt;
// }
