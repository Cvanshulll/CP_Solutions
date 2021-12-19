#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
  int k;
  cin>>k;
  set<int> s; // set 
  for(int i=k+1;i<=9050;i++){ // increase year by 1 
    int n=i;
    while(n){
      int last=n%10;
      s.insert(last);
      n=n/10;
    }
    if(s.size()==4){
      cout<<i;
      break;
    }
    else{
      s.clear();
    }
  }
 
}
 
int main()
{
  
      solve();
    
    return 0;
}
