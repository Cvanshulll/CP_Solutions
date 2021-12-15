#include<bits/stdc++.h>  ///iostream 
using namespace  std;
typedef long long ll;
#define   fo(i,a,b)     for(int i=a;i<b;++i)
 
int main()
{
  int n, m;
    cin >> n >> m;
    string s;
    fo(i,0,n)
    {
    	cin >> s;
    	fo(j,0,m)
    	{
    		if(s[j] == '.')
    		{
    			if((i+j)&1)
    				s[j] = 'W';
    			else
    				s[j] = 'B';
    		}
    	}
    	cout << s << endl;
    }
  }
 
