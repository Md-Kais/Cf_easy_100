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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '8')
        {
            ans++;
        }
    }
    int z = floor(n/ 11);
   // cout<<ans<<endl;
    cout << min(ans, z) << endl;
    return 0;
}
// I guess it's time to bury your ass with the chrome
// Straight to the dome.