#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
   ll n;
   cin>>n;
   ll a[n+1];
   for(ll i=1;i<=n;i++){
      cin>>a[i];
   }
   ll dp[n+2];
   dp[0]=0;
   dp[1]=0;
   dp[2]=abs(a[2]-a[1]);
   for(ll i=3;i<=n;i++){
       ll op1=dp[i-1]+abs(a[i-1]-a[i]);
       ll op2=dp[i-2]+abs(a[i-2]-a[i]);
       dp[i]=min(op1,op2);
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