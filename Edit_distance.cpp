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
        string s1,s2;
        cin>>s1>>s2;
        ll n=s1.size(),m=s2.size();
        vector<vector<ll>> dp(s1.size() + 1, vector<ll>(s2.size() + 1, INT32_MAX));
        dp[0][0]=0;
        for(ll i=0;i<=n;i++){
            for(ll j=0;j<=m;j++){
                if(i!=0){
                    dp[i][j]=min(dp[i-1][j]+1,dp[i][j]);
                }
                if(j!=0){
                    dp[i][j]=min(dp[i][j-1]+1,dp[i][j]);
                }
                if(i!=0 && j!=0){
                    dp[i][j]=min(dp[i-1][j-1]+(s1[i-1]!=s2[j-1]),dp[i][j]);
                }
            }
        } 
        cout<<dp[n][m]<<endl; 
    //}
    #ifndef ONLINE_JUDGE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
}