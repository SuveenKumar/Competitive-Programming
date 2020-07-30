#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
     ll n;
     cin>>n;
     ll a[n];
     ll dp[6];
     memset(dp,0,sizeof(dp));
     for(ll i=0;i<n;i++){
        cin>>a[i];
    }
     for(ll i=0;i<n;i++){
          if(a[i]==4){
              dp[0]++;
         }
         else if(a[i]==8){
            dp[1]=min(dp[0],dp[1]+1);
         }
          else if(a[i]==15){
            dp[2]=min(dp[1],dp[2]+1);
         }
          else if(a[i]==16){
            dp[3]=min(dp[2],dp[3]+1);
         }
          else if(a[i]==23){
            dp[4]=min(dp[3],dp[4]+1);
         }
          else if(a[i]==42){
            dp[5]=min(dp[4],dp[5]+1);
         }
     }
     cout<<n-(6*dp[5])<<endl;
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