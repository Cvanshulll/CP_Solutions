#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
 
 ll n;
 cin >> n;
 int f=0, z=0;
 int a[n];
 for (int i = 1; i <= n; i++)
 {
   cin>>a[i];
   if(a[i]==0)
   {
     z++;
   }
   else
   {
     f++;
   }
 }

 f = f - f % 9;

 if(z==0)
 {
   cout << "-1" << endl;
   return 0;
 }
 else if(f==0){
   cout << 0;
 }
else{
  while(f--){
    cout << 5;
  }
  while(z--){
    cout << 0;
  }
}
 return 0;
}
