#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
 
 
bool isPrime(int n)
{
    // Corner case
    if (n == 1)
        return true;
        if(n<1)
        {
          return false;
        }
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
 
// #define m =10e
int main(){
 
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
 
 
    
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    if(n%7==0)
    {
      cout<<n<<'\n';
    }
    else
    {
        ll not_r = n/10;
        ll temp ;
        for(int i =1; i<=9; i++)
        {
          temp =  not_r*10+i;
          if(temp%7==0)
          {
            cout<<temp<<'\n';
            break;
          }
        
      }
    }
  }
  
  return 0;
}
 
