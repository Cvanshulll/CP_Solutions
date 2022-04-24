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
 
bool ans[26];
void cvanshul()
{
	string s;
	cin >> s;
	
	memset(ans, 0, sizeof(ans));
	
	int k = s.size();
	for(int i =0; i<k ; i++)
	{
		int j = i;
		while(j+1<k && s[j+1]==s[i])
		{
			j++;
		}
		// cout<<j<<" "<<i<<endl;
		if(( j-i)%2==0)
		{
			ans[s[i]-'a'] =true;
		}
		i=j;
	}
	for (int i = 0; i < 26; i++) if (ans[i])
		cout << char('a' + i);
	cout << endl;
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
