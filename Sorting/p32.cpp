#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
int main()
{

    optimize();

    ll n;
    cin >> n;
    ll x = max(n - (n / 2),(n/2));
    

    ll a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<ll >());
    ll  z = accumulate(a, a + x, 0);
    // cout << z << endl;
    ll  y = accumulate(a + x , a + n, 0);
    // cout << y << endl;
    ll  ans = z * z + y * y;
    cout << ans << endl;
    return 0;
}
// I guess it's time to bury your ass with the chrome
// Straight to the dome.