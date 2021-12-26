#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <string.h>
#include <map>
#include <sstream>
#include <cstring>
#include<bits/stdc++.h>

using namespace std;


int main(){
    ll n,r;
    string s;
    cin>>n>>r>>s;
    n--;
    ll t = s.size()-r;
    reverse(s.begin()+n,s.end()-t);
   
    cout<<s;
}

// meramtsirhcyrs
