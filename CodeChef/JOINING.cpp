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


long long primenext(long long int a)
{
	int temp = 0;
	while (1)
	{
		temp = 0;
		for (int i = 2; i * i <= a; i++)
		{
			if (a % i == 0)
			{
				temp = 1;
				break;
			}
		}
		if (temp == 0)
			break;
		else
			a++;
	}
	return a;
}

  

bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (isdigit(c) == 0) return false;
    }
    return true;
}


int cost(string& a , string& b)
{
	ll r=0;
	for(int i =0; i<a.size(); i++)
	{
		r+= abs(a[i]-b[i]);
	}
	return r;
}


// cout<<" Have Patience "<<endl;

// ________________********___________________________

const int N = (int)10e6 + 7;
 

void cvanshul()
{
	
	// always remember edge cases , you idiot! 

   
    ll n,k;
    cin>>n>>k;
    int tot_grp = n/5;
    if(n%5!=0)
    {
        tot_grp++;
    }
    int curr = k/5; 
    if(k%5!=0)
    {
        curr++;
    }// k/5+(k%5?0:1)
    cout<<tot_grp-curr<<endl;

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
  
 
  ll t;
  cin>>t;
  while(t--)
  {
    cvanshul();
  }

  // cvanshul();
  
  return  0;
}
