#include <bits/stdc++.h>
 
using namespace std;
 
 
void solve() {
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
 
 
	while(t--)
	{	
		for(int i =0;i<s.size();i++)
		{   
			if(s[i]=='B' && s[i+1]=='G') 
			{
				s[i]='G';
				s[i+1]='B';
				i++;
			}
		}
	}
	
 
		cout<<s<<" ";
	
}
 
 
int main() {
    ios::sync_with_stdio(false);
 
//    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
solve();
}