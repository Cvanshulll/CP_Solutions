#include <iostream>
using namespace std;


int main() {
	// your code goes here
    int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    
	    // 1 2(->3),  1 2(->3),  1 2
	    
	    if((b-a)%3==0 || (b-a)%3==1)
	    {
	        cout<<"YES"<<endl;
	    }
	   
	    else {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
