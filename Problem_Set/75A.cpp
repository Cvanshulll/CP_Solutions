#include<bits/stdc++.h>
#include<iostream>
using namespace std; 
typedef long long ll;

#define YES    cout<<"YES\n";
#define NO     cout<<"NO\n";
#define Yes    cout<<"Yes\n";
#define No     cout<<"No\n";
#define all(v) begin(v), end(v)

  // cin.getline(s,len);
  // getline(cin,s);

// 


bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (isdigit(c) == 0) return false;
    }
    return true;
}


// cout<<" Have Patience "<<endl;

// ________________********___________________________

const int N = (int)10e6 + 7;
 

void cvanshul()
{
  ll a , b ;
  cin>>a>>b;
  ll sum = a+b;
  // cout<<" Have Patience "<<endl;
  ll m =1;
  ll new_a=0;
  
  while(a)
    {
      ll r = a%10;
      a = a/10;
      if(r==0)

      {
        continue;
      }
      else 
      {
        new_a += r*m;
        m*=10;
      }
    
    }
  ll new_b=0;
  m =1;
  while(b)
    {
      ll r = b%10;
      b = b/10;
      if(r==0)

      {
        continue;
      }
      else 
      {
        new_b += r*m;
        m*=10;
      }
     
    }
  ll new_sum =0;
  m =1;
  while(sum)
    {
      ll r = sum%10;
      sum = sum/ 10;
      if(r==0)

      {
        continue;
      }
      else 
      {
        new_sum += r*m;
        m*=10;
      }
      
    }
  ll ans = new_a + new_b;
  
  if(new_sum == ans)
  {
    YES;
  }
  else 
  {
    NO;
  }
  
 return ;
}


// ___________________********___________________________
 
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
  //   cvanshul();
  // }

  cvanshul();
  
  return 0;
}
