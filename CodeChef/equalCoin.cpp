// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main()
// {
//   ll n;
//   cin>>n;
//   ll a[n];ll p[n];
//   for(int i=0;i<n;i++)
//   {
//     cin>>a[i];
    
//   }
//   unordered_map<float,float>m;
//   for(int i=0;i<n;i++)
//   {
//     cin>>p[i];
//   }
// float f[n];
//   for(int i=0;i<n;i++)
//   {
//     float s= p[i]+0.0;
//     f[i]=a[i]/s;
//     // cout<<f[i]<<" ";
//   }
  
//   for(int i=0;i<n;i++)
//   {
//     if(m.find(f[i])==m.end())
//     m[f[i]]=1;
//     else 
//     {
//       continue;
//     }

//   }
//   cout<<m.size()<<'\n';

  
  
//     return 0;
// }

// // int main() {
// //     covid19
// //     int n;
// //     cin >> n;
// //     int sum=0;
// //     for(int i=0;i<n;i++)
// //     {
// //         int x;
// //         cin >> x;
// //         sum+=x;
// //     }
// //     int cnt=0;
// //     for(int i=1;i<6;i++)
// //     {
// //         if((sum+i)%(n+1)!=1) {
// //             cnt++;
 
// //         }
// //     }
// //     cout << cnt;
// // }


#include <iostream>
using namespace std;

int main() {
	// your code goes here
 int t;
 cin>>t;
  while(t--)
  {
      int x,y;
     cin>>x>>y;
      if(x>0 && (x+2*y)%2==0)
      {
          cout<<"YES"<<'\n';
      
       }
       else if((x+2*y)%4==0)  // ignore odd Y
       {
           cout<<"YES"<<'\n';
       }
       else
       {
           cout<<" NO"<<'\n';
       }
  }
	return 0;
}
