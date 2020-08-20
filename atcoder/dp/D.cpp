#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
   ll n,w;
   cin>>n>>w;
   pair<ll,ll> a[n+1];
   for(ll i=1;i<=n;i++){
    ll x,y;
    cin>>x>>y;
    a[i]={x,y};
   }
   ll dp[n+1][w+1];
   for(ll i=0;i<n+1;i++){
     for(ll j=0;j<w+1;j++){
         dp[i][j]=0;
     }
   }   
   for(ll i=0;i<=w;i++){
      if(a[1].first<=i){
        dp[1][i]=a[1].second;
      }
      else{
        dp[1][i]=0;
      }
   }
   for(ll i=2;i<=n;i++){
     for(ll j=0;j<=w;j++){
        if(a[i].first<=j){
            dp[i][j]=max((a[i].second+dp[i-1][j-(a[i].first)]),dp[i-1][j]);
        }
        else{
             dp[i][j]=dp[i-1][j];
        }
     }
   }
   cout<<dp[n][w]<<endl;
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