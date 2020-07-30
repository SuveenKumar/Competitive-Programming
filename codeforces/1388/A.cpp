#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
  ll n;
  cin>>n;
  if(n==36){
    cout<<"YES"<<endl;
    cout<<6<<" "<<10<<" "<<15<<" "<<5<<endl;
    return;
  }
   if(n==40){
    cout<<"YES"<<endl;
    cout<<6<<" "<<10<<" "<<15<<" "<<9<<endl;
    return;
  }
   if(n==44){
    cout<<"YES"<<endl;
    cout<<6<<" "<<10<<" "<<15<<" "<<13<<endl;
    return;
  }
  if(n>30){
    ll ans=n-30;
    cout<<"YES"<<endl;
    cout<<6<<" "<<10<<" "<<14<<" "<<ans<<endl;

  }
  else{
    cout<<"NO"<<endl;
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