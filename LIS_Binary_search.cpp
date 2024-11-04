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
        vector<ll> v(n);
        read(v,n);
        vector<ll> dp;
        for(int i:v){
            ll pos=lower_bound(dp.begin(),dp.end(),i)-dp.begin();
            if(pos==dp.size()){
                dp.pb(i);
            }
            else{
                dp[pos]=i;
            }
        }
        cout<<dp.size()<<endl;
    //}
    #ifndef ONLINE_JUDGE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
}


/*
ll n;
cin>>n;
vector<ll>v(n);
read(v,n);
vector<ll> dp(n,1);
for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
        if(v[i]>v[j]){
            dp[i]=max(dp[i],dp[j]+1);
        }
        else{
            continue;
        }
    }
}
ll ans=-1;
for(int i=0;i<dp.size();i++){
    ans=max(ans,dp[i]);
}
cout<<ans<<endl;
*/