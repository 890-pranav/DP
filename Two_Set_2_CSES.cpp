#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define PI 3.141592653589793238462
#define all(a) a.begin(), a.end()
#define read(v,n) for(int i=0;i<n;i++)cin>>v[i]
#define TIN ll t=0;cin>>t;for(int i=0;i<t;i++)
#define no() cout << "NO" << endl
#define yes() cout << "YES" << endl
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

int main(){
    fastio();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt","w",stdout);
    #endif
    //TIN{
        //cout<<"Case #"<<i+1<<":";
        ll n;
        cin>>n;
        ll sum=((n)*(n+1))/2;
        if(sum%2!=0){
            cout<<"0"<<endl;
        }
        else{
            ll target=sum/2;
            ll dp[n][target+1];
            memset(dp,0,sizeof(dp));
            dp[0][0]=1;
            for(int i=1;i<n;i++){
                for(int j=0;j<=target;j++){
                    dp[i][j] = dp[i-1][j];
                    ll left = j-i;
                    if (left >= 0) {
                        dp[i][j] = (dp[i][j] + dp[i-1][left]) % mod;
                    }
                }
            }
            cout<<dp[n-1][target]<<endl;
        }
    //}
    #ifndef ONLINE_JUDGE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
}
