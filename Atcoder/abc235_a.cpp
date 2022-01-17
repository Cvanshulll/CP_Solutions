#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;


const ll maxi = 2e5 + 5;
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //ll t;cin>>t;
    //while(t--){
    
    int n ;
    cin>>n;
    string t = to_string(n);
    string s = t+t+t+t;
   
    string s1 = s.substr(0,3); // substr(pos,len);
    string s2 = s.substr(1,3);
    string s3 = s.substr(2,3);

    int m =100;
    int r1 ,a1=0;
    int r2,r3;
    int a2 =0,a3=0;
      for(int i =0; i<s1.size(); i++)
      {
        r1 = ((int)(s1[i]-'0'));
        a1 += (r1*m);
        m = m/10;
      }
      m = 100;
      for(int i =0; i<s2.size(); i++)
      {
        r2 = ((int)(s2[i]-'0'));
        // cout<<r2<<" ";
        a2 += (r2*m);
        // cout<<a2<<" ";
        m = m/10;
      }
       m =100;
      for(int i =0; i<s3.size(); i++)
      {
        r3 = ((int)(s3[i]-'0'));
        a3 += (r3*m);
        m = m/10;
      }

    cout<<(a1+a2+a3)<<endl;

    return 0;
}
