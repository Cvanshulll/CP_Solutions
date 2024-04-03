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
#define mod 1000000007

ll modexp(ll a, ll b);
ll sum_square(ll n)
{
    ll ans = (((n * (n + 1)) % mod) * (2 * n + 1) % mod) % mod;
    ;
    ans = (ans * modexp(6, mod - 2)) % mod;

    return ans;
}
ll sum_linear(ll n)
{
    ll ans = (n * (n + 1)) % mod;
    ans = (ans * modexp(2, mod - 2)) % mod;

    return ans;
}
ll modexp(ll a, ll b)
{
    ll ans = 1;

    while (b > 0)
    {
        if ((b % 2) == 1)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }

    return ans;
}

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

void printBinary(int num)
{
    for (int i = 10; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

// cout<<" Have Patience "<<endl;
ll factorial(ll n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

ll maxpathsum(ll i, ll j, ll n, vector<vector<ll>> &dp, vector<vector<ll>> &v)
{
    if (i >= n || j >= n)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    ll ans = v[i][j] + max(maxpathsum(i + 1, j, n, dp, v), maxpathsum(i, j + 1, n, dp, v));
    dp[i][j] = ans;
    return ans;
}

ll ceil(ll a, ll b)
{
    return (a + b - 1) / b;
}
// ________________********___________________________

// const int N = (int)10e9 + 7;


// function to find the solution
int gcd(int a, int b,int &x, int &y){
    if(b == 0){
        x= 1; y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a%b, x1, y1);
    x = y1;
    y = x1 - y1*(a/b);
    return d;
}

void solution(int a, int b, int n)
{
    int x0, y0;
    int g = gcd(a, b, x0, y0);
    if(n%g != 0){
        cout<<"No Solution Exists"<<endl;
        return;
    }
    x0 = x0*n/g;
    y0 = y0*n/g;
    // single valid answer
    if(x0>=0 && y0>=0)
        {
            cout<<"YES"<<endl;
        return;
        }
    else
        {
            cout<<"NO"<<endl;
        return;
        }
 
    // other valid answers can be obtained through...
    // x = x0 + k*(b/g)
    // y = y0 - k*(a/g)
    for(int k = -3; k <= 3; k++){
        int x = x0 + k*(b/g);
        int y = y0 - k*(a/g);
        if(x>=0 && y>=0)
        {
            cout<<"YES"<<endl;
        return;
        }
        else
        {
            cout<<"NO"<<endl;

        return;

    }
}
}



void cvanshul()
{

    // always remember edge cases , you idiot!
    // check for if array elements are 0 only and 1 only // Check for edge cases

    
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
    }
    if(sum%2 != 0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    return;
    
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

    ll t;
    cin >> t;
    while (t--)
    {
        cvanshul();
    }

    // cvanshul();

    return 0;
}
