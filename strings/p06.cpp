#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define test int tc; cin>> tc; while(tc--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
int main(){

    optimize();

    string sum;
    int i;
    string result, r1;
    cin >> sum;

    for (int i = 0; i < sum.size(); i++)
    {
        if (sum[i] != '+')
        {
            result.push_back(sum[i]);
            std::sort(result.begin(), result.end());
        }
    }

    for (i = 0; i < result.size() - 1; i++)
    {
        r1 += result[i];
        r1 += "+";
    }
    r1 += result[i];
    cout << r1;

    return 0;
}
//I guess it's time to bury your ass with the chrome
//Straight to the dome.