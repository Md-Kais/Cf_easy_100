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

vector<int> v;
void prime(int n)
{
   // cout << "doen";
    bool primes[n + 1];
    memset(primes, true, sizeof(primes));
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (primes[i] == true)
        {
           // cout << i << endl;
            v.push_back(i);
        }
    }
    cout<<v.size()<<endl;
    for (auto e : v)
    {
        cout << e << " ";
    }
}
int main()
{

    optimize();

   
    int ans = 0;

    int n;

    cin>>n;
    prime(n);
    
   
    return 0;
}
// I guess it's time to bury your ass with the chrome
// Straight to the dome.