#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;



int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


  ll num_g {};
    ll num_b {};
 
    std::cin >> num_b >> num_g;
 
    ll i {};
    ll target {num_b + num_g};
    if(num_b > num_g) {
        while(i < target) {
            if(num_b) {
                std::cout << 'B';
                num_b--;
                i++;
            }
 
            if(num_g) {
                std::cout << 'G';
                num_g--;
                i++;
            }
        }
    } else {
        while(i < target) {
            if(num_g) {
                std::cout << 'G';
                num_g--;
                i++;
            }
            if(num_b) {
                std::cout << 'B';
                num_b--;
                i++;
            }
        }
    }
return 0;
 
}
