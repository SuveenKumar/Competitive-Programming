#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1e9+7
#define INF 1e9+9
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
ll dp[100005];
bool visited[100005];
vector<ll> adj[100005];
void dfs(ll src){
     visited[src]=true;
     repe(nbr,adj[src]){
        if(!visited[nbr]){
            dfs(nbr);
        }
        dp[src]=max(dp[nbr]+1,dp[src]); 
     }
}
void solve(){
  ll n,m;
  cin>>n>>m;
  rep(i,1,m){
      ll x,y;
      cin>>x>>y;
      adj[x].push_back(y);
  }
  memset(dp,0,so(dp));
  dp[1]=0;
  rep(i,1,n){
    if(!visited[i]){
        dfs(i);
    }
  }
  ll res=0;
  rep(i,1,n){
     res=max(res,dp[i]);
  }
  cout<<res<<endl;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    fast
    solve();
    return 0;
}