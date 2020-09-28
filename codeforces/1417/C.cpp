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
   vector<ll> a[n+1];
   ll maxdiff[n+1];
   memset(maxdiff,0,so(maxdiff));
   rep(i,1,n){
    ll x;
    cin>>x;
    a[x].pb(i);
    if(a[x].size()>1){
     ll num=(a[x][a[x].size()-1]-a[x][a[x].size()-2]);
      maxdiff[x]=max(num,maxdiff[x]);
    }
    else{
      maxdiff[x]=i;
    }
   }
   rep(i,1,n){
      if(maxdiff[i]!=0){
      ll num=n-(a[i][a[i].size()-1])+1;
      maxdiff[i]=max(num,maxdiff[i]);
   }
   //cout<<maxdiff[i]<<endl;
 }
 ll adj[n+1];
 memset(adj,-1,so(adj));
   rep(i,1,n){
    if(maxdiff[i]!=0){
     rep(j,maxdiff[i],n){
       if(adj[j]==-1)
       adj[j]=i;
       else{
        break;
       }
     }
   }
 }
 rep(i,1,n){
  cout<<adj[i]<<" ";
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