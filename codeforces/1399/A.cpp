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
   sort(a,a+n);
   ll i;
   for(i=1;i<n;i++){
      if(a[i]-a[i-1]>1){
        break;
      }
   }
   if(i==n){
    cout<<"YES"<<endl;
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