#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
//  int k;
//  cin>>k;
//  set<int> s; // set 
//  for(int i=k+1;i<=9050;i++){ // increase year by 1 
//    int n=i;
//    while(n){
//      int last=n%10;
//      s.insert(last);
//      n=n/10;
//    }
//    if(s.size()==4){
//      cout<<i;
//      break;
//    }
//    else{
//      s.clear();
//    }
//  }
// 
//}
// 
	
//	int n ;
//	cin>>n;
//	
//	// base cases ;;;
//	if(n ==7 || n==4)
//	{
//		cout<<"NO"<<endl;
//	}
//	
//	else
//	{
//	while(n>0)
//	{
//		int last = n%10;
//		if(last == 7 )
//		{
//			n=n/10;
//			continue;
//		}
//		else if(last ==4)
//		{
//			n = n/10;
//			continue;
//		}
//		else 
//		{
//			cout<<"NO"<<endl;
//			break;		
//		}		
//	}
//}
//	if(n ==0)
//	{
//		cout<<"YES"<<endl;;
//	}
//	
// 
 
	int n;
	cin>>n;
char s[n];
cin>>s;
	int c=0;
	for(int i=0; i<n;i++)
	{
		if(s[i]==s[i+1])
		{
			c++;
		
		}
		
		
	}
	cout<<c<<endl;
 	
}
int main()
{
  
      solve();
    
    return 0;
}
