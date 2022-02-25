#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(v) begin(v), end(v)
 
 
 
  // cin.getline(s,len);
  // getline(cin,s);
 
 
void solve ()
{
  ll n;
  cin>>n;
  ll v[n];
	int arr1[5005], arr2[5005], arr3[5005];


  ll one =0, two =0, three=0;
  int p1 = 0, p2 = 0, p3 = 0;
  for(int i =0; i<n ; i++)
    {
      cin>>v[i];
      if(v[i]==1)
      {
        one++;
        arr1[p1]=i;
        p1++;
      }
      else if (v[i]==2)
      {
        two++;
        arr2[p2]=i;
        p2++;
      }
      else 
      {
        three++;
        arr3[p3]=i;
        p3++;
      }
    }
  ll mini =0;
  if(one==0 ||two==0 || three ==0)
  {
    cout<<"0"<<endl;
  }
  else 
  {
     mini =min(one,min(two,three));
    cout<<mini<<endl;
  }
  // sort(v,v+n);

  for(int i =0; i<mini; i++)
    {
      cout<<arr1[i]+1<<" "<<arr2[i]+1<<" "<<arr3[i]+1<<endl;
    }
  
}
 
// 10
// 9 6 1 8 3 9 7 5 10 4
// 7 1 3 2 7 6 9 5
 
 
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
