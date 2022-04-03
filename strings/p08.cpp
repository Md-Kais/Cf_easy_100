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

    int n, L, a;
        cin >> n >> L >> a;
        int c = 0, p = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>c;
            int temp;
            cin>>temp;
            ans+=(c-p)/a;
            p=c+temp;
        }
        ans+=(L-p)/a;
        cout<<ans<<endl;
    
    return 0;
}
