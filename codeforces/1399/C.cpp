#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
   ll n;
   cin>>n;
   ll a[n];
   for(ll i=0;i<n;i++){
     cin>>a[i];
   }
   ll maxm=0;

   for(ll sum=2;sum<=100;sum++){
    ll b[n];
    for(ll i=0;i<n;i++){
      b[i]=a[i];
    }
    ll ans=0;
   for(ll i=0;i<n;i++){
      for(ll j=i+1;j<n;j++){
          if(b[i]+b[j]==sum){
            ans++;
            b[j]=-MOD;
            break;
          }
      }
   }
  maxm=max(ans,maxm);
 }
   cout<<maxm<<endl;
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