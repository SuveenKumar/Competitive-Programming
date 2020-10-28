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
#define minheap priority_queue<int,vector<int>,greater<int>>
#define maxheap priority_queue<int>
#define repe(i,a) for(auto i:a)
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rrep(i,a,b) for(ll i=b;i>=a;i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); 
ll dfs(ll node,vector<ll>* adj){
    ll h=0;
    if(adj[node].size()!=0){
    rep(i,0,adj[node].size()-1){
       h=max(dfs(adj[node][i],adj),h);
    }
  }
    return h+1;
}
void solve(){
   ll n;
   cin>>n;
   ll a[n];
   queue<ll> q;
   rep(i,0,n-1){
    cin>>a[i];
}
   vector<ll> adj[n+1];
   ll node=1;
   q.push(node);
   rep(i,1,n-1){
     if(a[i]>a[i-1]){
        adj[node].pb(a[i]);
        q.push(a[i]);
     }
     else{
        q.pop();
        node=q.front();
        adj[node].pb(a[i]);
        q.push(a[i]);
     }
   }
   // rep(i,0,n){
   //  if(adj[i].size()!=0){
   //    cout<<i<<": ";
   //    rep(j,0,adj[i].size()-1){
   //    cout<<adj[i][j]<<" ";
   //  }
   //  }
    
   //  cout<<endl;
   // }
  // cout<<"asd"<<endl;
  cout<<dfs(1,adj)-1<<endl;
}
int main() {
#ifndef ONLINE_JUDGE
      freopen("input.txt","r", stdin);
      freopen("output.txt","w", stdout);
  #endif
      fast
      ll t;
      cin>>t;
      while(t--)
        solve();
      return 0;
  }
