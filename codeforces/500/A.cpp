#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
bool dfs(ll* a,ll n,ll src,ll t){
    if(src==t){
        return true;
    }
    if(src>t){
        return false;
    }
    return dfs(a,n,src+a[src],t);
}
void solve(){
  ll n,t;
  cin>>n>>t;
  ll a[n+1];
  for(ll i=1;i<=n;i++){
      cin>>a[i];
  }
  if(dfs(a,n,1,t))
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
     solve();
    return 0;
}
