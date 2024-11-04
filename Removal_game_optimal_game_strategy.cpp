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
        ll table[n][n];
        for(int i=0;i<n;i++){
            for(int start=0,end=i;end<n;start++,end++){
                ll option1 = (start + 2 <= end) ? table[start + 2][end] : 0;
                ll option2 = (start + 1 <= end - 1) ? table[start + 1][end - 1] : 0;
                ll option3 = (start <= end - 2) ? table[start][end - 2] : 0;
                table[start][end] = max(v[start] + min(option1, option2),
                                         v[end] + min(option2, option3));
            }
        }
        cout<<table[0][n-1]<<endl;
    //}
    #ifndef ONLINE_JUDGE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
}