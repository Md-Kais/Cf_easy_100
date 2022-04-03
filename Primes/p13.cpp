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


        long long int  n;
        cin>>n;
        long long int ans=INT64_MAX;
        for(int i=1;i<=sqrt(n);i++){
            long long int x=n/i;
            if(x*i==n){
                long long perimeter=2*(i+x);
              //  cout<<x<<endl;
                ans=min(ans,perimeter);
            }
        }
        cout<<ans<<endl;
    
return 0;
}
//I guess it's time to bury your ass with the chrome
//Straight to the dome.