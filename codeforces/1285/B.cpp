#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
  ll n;
  cin>>n;
  ll a[n];
  ll sum=0;
  for(ll i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }
  ll currsum=0;
  ll maxsum=0;
  for(ll i=1;i<n;i++){
     currsum+=a[i];
     if(currsum<0)currsum=0;
     else{
        maxsum=max(maxsum,currsum);
     }
  }
  currsum=0;
  for(ll i=0;i<n-1;i++){
     currsum+=a[i];
     if(currsum<0)currsum=0;
     else{
        maxsum=max(maxsum,currsum);
     }
  }
 // cout<<maxsum<<" "<<sum<<endl;
  if(maxsum>=sum){
     cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
  }
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