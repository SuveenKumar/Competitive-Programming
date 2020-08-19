#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
   ll n,k;
   cin>>n>>k;
   ll a[n+1];
   for(ll i=1;i<=n;i++){
      cin>>a[i];
   }
   ll dp[n+2];
   dp[1]=0;
   for(ll i=2;i<=n;i++){
       ll minm=INT_MAX;
       for(ll j=1;j<=k;j++){
          if(i-j>=1){
             ll op=dp[i-j]+abs(a[i]-a[i-j]);
             minm=min(minm,op);
           }
           else{
            break;
           }
       }
       dp[i]=minm;     }
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