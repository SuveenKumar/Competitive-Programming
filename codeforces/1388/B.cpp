#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
  ll n;
  cin>>n;
  ll p=ceil(n/4.0);
  for(ll i=1;i<=n-p;i++){
    cout<<9;
  }
  for(ll i=1;i<=p;i++){
    cout<<8;
  }
  cout<<endl;
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