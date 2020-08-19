#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
   ll n;
   cin>>n;
   ll a[n+1];
   ll b[n+1];
   ll c[n+1];
   for(ll i=1;i<=n;i++){
      cin>>a[i]>>b[i]>>c[i];
   }
   ll dp[n+1][3];
   dp[1][0]=a[1];
   dp[1][1]=b[1];
   dp[1][2]=c[1];
   for(ll i=2;i<=n;i++){
        dp[i][0]=max(dp[i-1][1],dp[i-1][2])+a[i];
        dp[i][1]=max(dp[i-1][0],dp[i-1][2])+b[i];
        dp[i][2]=max(dp[i-1][0],dp[i-1][1])+c[i];
   }
   cout<<max(dp[n][0],max(dp[n][1],dp[n][2]))<<endl;
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