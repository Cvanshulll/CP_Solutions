#include<bits/stdc++.h>  ///iostream 
using namespace  std;
typedef long long ll;
 
 
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
  
  // ll t;
  // cin>>t; 
  // while(t--)
  // {

 
 
    long long  n,x=0,y=0,a,i,d,dd;
    vector<int>v;
    for(cin>>n,i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++){
        if(v[i]==v[0]) x++;
        if(v[i]==v[n-1]) y++;  
    }
    d=v[n-1]-v[0];
    if(d==0) dd=x*(x-1)/2;
    else dd=x*y;
    cout<<d<<" "<<dd;
}
