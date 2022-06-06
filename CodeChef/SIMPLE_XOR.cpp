#include<iostream>
using namespace std;

int main()
{
    long long t ;
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        if((l^l+1^l+2^l+3)==0)
        {
            cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<endl;
        }
        else if(l+4>r)
        {
            cout<<-1<<endl;
        }
        else // odd
        {
            cout<<l+1<<" "<<l+2<<" "<<l+3<<" "<<l+4<<endl;
        }
      
        
    }
}
