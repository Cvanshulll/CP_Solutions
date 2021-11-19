#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;



int main()
{
  queue<ll>q;
  ll n , m , ans = 0;
  cin >> n >> m ;
  ll arr[n];
  for(int i =0 ; i < n ; i++)
  {
	cin >> arr[i];
	q.push(i);
  }

  while(!q.empty())
  {
 
	int i = q.front();
	q.pop();
	ans = i  ;
	arr[i]-=m ;
	if(arr[i]>0){
		q.push(i);
	}
 
  }
	cout <<ans+1;
  return 0;
}
 
  
