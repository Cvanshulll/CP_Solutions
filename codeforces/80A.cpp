#include<bits/stdc++.h>
using namespace std;
 
 
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
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
 
//	string s ;
//	int u=0, l=0;
//	cin>>s;
//	for(int i=0; i<s.size(); i++)
//	{
//		if(s[i]>='A' && s[i]<='Z')
//		{
//			u++;
//		}
//		else
//		{
//			l++;
//		}
//	}
//	if(u<l)
//	{
//		transform(s.begin(), s.end(), s.begin(), ::tolower);
////		tolower(s);
//		cout<<s<<endl;
//	}
//	else if(u==l)
//	{
//			transform(s.begin(), s.end(), s.begin(), ::tolower);
////		tolower(s);
//		cout<<s<<endl;
//	}
//	else{
//		transform(s.begin(), s.end(), s.begin(), ::toupper);
////		toupper(s);
//		cout<<s;
//	}
 
// string s;
// cin>>s;
//    for(int i=0; i<s.size(); i++)
//    {
//    	if(i==0)
//			cout<<char(toupper(s[0]));
//    	else 
//		{
//    		cout<<s[i];
//		}
//    		
// 	        
//	}
	

 
	int n,m;
	cin>>n>>m;
	int x=-1;
	for(int i=n+1;i<100; i++)
	{
		if(isPrime(i))
		{
			x=i;
			break;
		}
	}
	if(x==m)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
 	
}
 
 
int main()
{
  
      solve();
    
    return 0;
}
 
