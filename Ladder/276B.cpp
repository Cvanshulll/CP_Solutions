#include<bits/stdc++.h>  ///iostream 
using namespace  std;
typedef long long ll;
 
 
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
     string s;
    cin >> s;
    map<int,int> m;
    for( int i=0; i<s.length();i++) {
        m[s[i]]++;
    }
    int si = 0;
    for (auto i : m) {
        if (i.second % 2 == 1) {
            si++;
        }
    }
    if (si == 0) {
        cout << "First";
    }
    else if (si == 1) {
        cout << "First";
    }
    else if (si % 2 == 0) {
        cout << "Second";
    }
    else {
        cout << "First";
    }
 
}
