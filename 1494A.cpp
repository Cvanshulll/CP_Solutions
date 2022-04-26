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

  
bool validBrackets(string s)
{
	int n = s.size();
	stack<char>st;
	for(int i =0; i<n; i++)
	{
		
		if(st.empty())
		{
			st.push(s[i]);
		}
		else if(s[i]==')' && st.top()=='(' )
		{
			st.pop();
		}
		else
		{
			st.push(s[i]);
		}
	}
	if(st.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}


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
	string s;
	cin>>s;
	
	int n = s.size();
	char first = s[0];
	char last = s.back();
	if(n==1)
	{
		NO;
		return ;
	}
	if(first==last)
	{
		NO;
		return ;
	}
	char x;
	if(( s[0]=='B'||s.back()=='B') && ( s[0]=='A'||s.back()=='A') )
	{
		x='C';
	}
	else if(( s[0]=='A'||s.back()=='A') && ( s[0]=='C'||s.back()=='C'))
	{
		x='B';
	}
	else
	{
		x='A';
	}
	
	string s1= s;
	
	for (int i = 0; i < n; i++)
        {
            if(s[i]==first)
            {
                s[i]='(';
                s1[i]='(';
            }
            if (s[i] == last)
            {
                s[i] = ')';
                s1[i] = ')';
            }
            if (s[i] == x)
            {
                s[i] = '(';
                s1[i] = ')';
            }
        }
        
        if(validBrackets(s))
        {
        	YES;
        	return;
        }
        if(validBrackets(s1))
        {
        	YES;
        	return ;
        }
        
        NO;
		
	
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
