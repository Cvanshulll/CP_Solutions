#include<bits/stdc++.h>
using namespace std; 
 
int main()
{
      int n,x=0,y=0,temp;
    cin>>n;
    for(int i =0; i<n ; i++)
    {
        cin>>temp;
        if (temp==100)
            x++;
        else
            y++;
    }
    if ((x!=0&&x%2==0)||(x==0&&y%2==0))
        cout<<"YES";
    else
        cout<<"NO";
  return 0;
}
