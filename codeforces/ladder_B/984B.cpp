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

void setbomb(int x, int y, int n, int m, vector<vector<int>> &ans)
{
	if (x > 0)
	{
		if (y > 0)
			ans[x - 1][y - 1]++;
		ans[x - 1][y]++;
		if (y < m - 1)
			ans[x - 1][y + 1]++;
	}
	if (x < n - 1)
	{
		if (y > 0)
			ans[x + 1][y - 1]++;
		ans[x + 1][y]++;
		if (y < m - 1)
			ans[x + 1][y + 1]++;
	}
	if (y > 0)
		ans[x][y - 1]++;
	if (y < m - 1)
		ans[x][y + 1]++;
}

void cvanshul()
{

    // always remember edge cases , you idiot!
    // check for if array elements are 0 only and 1 only // Check for edge cases

    int n, m;
	cin >> n >> m;
	vector<vector<char>> v(n, vector<char>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> v[i][j];
		}
	}
	vector<vector<int>> ans(n, vector<int>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (v[i][j] == '*')
				setbomb(i, j, n, m, ans);
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (v[i][j] == '.')
			{
				if (ans[i][j] != 0)
				{
					cout << "NO";
					return ;
				}
			}
			else if (v[i][j] != '*')
				if (ans[i][j] != v[i][j] - '0')
				{
					cout << "NO";
					return ;
				}
		}
	cout << "YES";
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
