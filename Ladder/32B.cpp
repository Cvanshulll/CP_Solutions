#include <bits/stdc++.h>
 
using namespace std;
 
 
void solve() {
    string s;
    cin>>s;
    
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='-' && s[i+1]=='.')
		{
			cout<<"1";
			i++;
			continue;
		}
		else if(s[i]=='-' && s[i+1]=='-')
		{
			cout<<"2";
			i++;
			continue;
		}
		else if(s[i]=='.')
		{
			cout<<"0";
		
			continue;
		}
	}
	
	
}
 
 
int main() {
    ios::sync_with_stdio(false);
 
//    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
solve();
}
 