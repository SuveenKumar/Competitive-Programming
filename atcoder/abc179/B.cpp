#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
   vector<pair<ll,ll>> a;
   rep(i,0,n-1){
       ll x,y;
       cin>>x>>y;
       a.pb(mp(x,y));
   }
   bool status=false;
   rep(i,0,n-3){
      if(a[i].ff==a[i].ss){
          if(a[i+1].ff==a[i+1].ss && a[i+2].ff==a[i+2].ss){
            status=true;
              break;
          }
      }
   }
  if(status){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    fast
    // ll t;
    // cin>>t;
    // while(t--)
    solve();
    return 0;
}