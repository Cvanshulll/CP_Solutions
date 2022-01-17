#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;


const ll maxi = 2e5 + 5;
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //ll t;cin>>t;
    //while(t--){
    
    int long long  n ;
    cin>>n;
    int long long a[n];
    for(int i =0; i<n ; i++)
    {
      cin>>a[i];
    }
    int long long pos = 0;
    for(int i =1; i<n ; i++)
    {
      if(a[i]>a[i-1])
      {
        pos++;
      }
      else if(a[i]<=a[i-1])
      {
        cout<<a[pos]<<endl;
        return 0;
      }
      
    }
     cout<<a[pos]<<endl;
    return 0;
}
