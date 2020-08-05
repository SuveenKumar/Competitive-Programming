#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
   ll n;
   cin>>n;
   ll a[n],b[n];
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   for(ll i=0;i<n;i++){
    cin>>b[i];
   }
   ll mina=MOD,minb=MOD;
   for(ll i=0;i<n;i++){
       mina=min(a[i],mina);
       minb=min(b[i],minb);
   }
   ll cnt=0;
   for(ll i=0;i<n;i++){
       cnt=cnt+max(a[i]-mina,b[i]-minb);
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