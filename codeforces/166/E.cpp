#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    vector<ll> dp(n+1,0);
    for(ll i=2;i<=n;i++){
        if(i%2==0)dp[i]=((dp[i-1]+1)*3)%MOD;
        else dp[i]=((dp[i-1]-1)*3)%MOD;
    }
    cout<<dp[n]<<endl;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}