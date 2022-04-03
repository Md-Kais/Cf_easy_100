#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef double dl;
#define endl "\n"
#define Y cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define sp " "
#define PB push_back
#define F first
#define S second
#define as(a) (a).begin(), (a).end()
#define ras(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()
#define ki 1LL
#define MOD 1000000000
#define over return 0;
#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)
void faltu()
{
    cerr << endl;
}
template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
int sort_check(int a[], int start, int end)
{
    bool f = true;
    for (int i = start + 1; i <= end; i++)
    {
        if (a[i] < a[i - 1])
        {
            f = false;
        }
    }
    if (f == true)
    {
        return (end - start + 1);
    }

    int mid = (start + end) / 2;
    return max(sort_check(a, start, mid), sort_check(a, mid + 1, end));
}
int main()
{

    //  test{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << sort_check(a, 1, n) << endl;

    over
}
// I guess it's time to bury your ass with the chrome
// Straight to the dome.
