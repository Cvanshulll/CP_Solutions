#include <bits/stdc++.h>
 
using namespace std;
 

void solve() {
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int sum =0;
    unordered_map<char, int>mp;
	for(int i =0; i<s1.size(); i++)
	{
		mp[s1[i]]=i;
	}
	for(int i =1; i<s2.size(); i++)
	{
		sum += abs(mp[s2[i]]-mp[s2[i-1]]);
	}
	cout<<sum<<endl;
}

 
int main() {
    ios::sync_with_stdio(false);
 
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    //solve();
}
