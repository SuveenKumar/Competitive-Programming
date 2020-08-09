#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve(){
   ll n,m;
   cin>>n>>m;
   char a[n+1][m+1];
   for(ll i=1;i<=n;i++){
      for(ll j=1;j<=m;j++){
          cin>>a[i][j];
      }
   }
   ll cnt=0;
   for(ll i=1;i<=m;i++){
      if(a[n][i]=='D')cnt++;
   }
   for(ll i=1;i<=n;i++){
    if(a[i][m]=='R')cnt++;
   }
   cout<<cnt<<endl;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}