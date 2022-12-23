#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;

#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define Yes cout << "Yes\n";
#define No cout << "No\n";
#define all(v) begin(v), end(v)

// cin.getline(s,len);
// getline(cin,s);

//
// #define MOD 1000000007

long long primenext(long long int a)
{
    int temp = 0;
    while (1)
    {
        temp = 0;
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 0)
            break;
        else
            a++;
    }
    return a;
}

bool isNumber(const string &str)
{
    for (char const &c : str)
    {
        if (isdigit(c) == 0)
            return false;
    }
    return true;
}

int cost(string &a, string &b)
{
    ll r = 0;
    for (int i = 0; i < a.size(); i++)
    {
        r += abs(a[i] - b[i]);
    }
    return r;
}

int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    /* A loop to slide pat[] one
       by one */
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        /* For current index i, check for
           pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return i;
    }
    return -1;
}

bool isPalindrome(string S)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++)
    {

        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1])
        {
            // Return No
            return false;
        }
    }
    // Return "Yes"
    return true;
}

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

ll sumDigit(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        ll k = n % 10;
        sum += k;
        k /= 10;
    }
    return sum;
}

ll countDigits(ll sum)
{
    ll c = 0;
    while (sum != 0)
    {
        ll k = sum % 10;
        c++;
        k /= 10;
    }
    return c;
}

// cout<<" Have Patience "<<endl;

// ________________********___________________________

const int N = (int)10e9 + 7;



void cvanshul()
{

    // always remember edge cases , you idiot!
    // check for if array elements are 0 only and 1 only // Check for edge cases


    string s;
    cin>>s;
    ll k ;
    cin>>k;
    ll n = s.size();
    if(n==0)
    {
        cout<<0<<endl;
        return;
    }
    ll ans =0;
    ll zeros=0;
    for(int i=n-1; i>0; i--)
    {
        if(s[i] == '0'){
            k--;
        }
        else{
            ans++;
        }
        if(k == 0){
            cout << ans << endl;
            return ;
        }
    }
    cout<<n-1<<endl;
    return ;
}


// ___________________********___________________________

// #define m =10e
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // const unsigned int M = 1000000007;

    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     cvanshul();
    // }

    cvanshul();

    
    return 0;
}
