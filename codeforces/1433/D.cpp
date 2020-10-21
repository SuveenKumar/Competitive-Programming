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
   ll a[n];
   rep(i,0,n-1){
    cin>>a[i];
   }
   ll k;
   for(k=0;k<=n-2;k++){
     if(a[k]!=a[k+1]){
        break;
     }
   }
   if(k==n-1){
     cout<<"NO"<<endl;
     return;
   }
   bool visited[n];
   memset(visited,0,so(visited));

   ll x;
   vector<pair<ll,ll>> v;
     rep(j,1,n-1){
        if(a[0]!=a[j]){
           v.pb({1,j+1});
           x=j+1;
        }
     }
    rep(i,1,n-1){
      if(a[i]==a[0]){
        v.pb({x,i+1});
      }
    }
   cout<<"YES"<<endl;
   rep(i,0,v.size()-1){
      cout<<v[i].ff<<" "<<v[i].ss<<endl;
   }
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    fast
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
