#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1000000007
#define INF 1000000009
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define so sizeof 
#define pii pair<ll,ll>
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define repe(i,a) for(auto i:a)
#define st string
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rrep(i,a,b) for(ll i=b;i>=a;i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); 
void solve(){
   ll n;
   cin>>n;
   ll a[n],b[n],c[n];
   rep(i,0,n-1){
    cin>>a[i];
   }
   rep(i,0,n-1){
    cin>>b[i];
   }
   rep(i,0,n-1){
    cin>>c[i];
   }
   vector<ll> v;
   v.pb(a[0]);
   for(ll i=0;i<=n-3;i++){
     if(v[i]!=a[i+1]){
       v.pb(a[i+1]);
     }
     else{
       v.pb(b[i+1]);
     }
   }
   if(v[0]!=a[n-1] && v[n-2]!=a[n-1]){
     v.pb(a[n-1]);
   }
   else if(v[0]!=b[n-1] && v[n-2]!=b[n-1]){

     v.pb(b[n-1]);
   }
   else{
     v.pb(c[n-1]);
   }
   rep(i,0,v.size()-1){
      cout<<v[i]<<" ";
   }
   cout<<endl;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    fast
    ll t;
    cin>>t;
    while(t--){
    solve();
  }
    return 0;
}