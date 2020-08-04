#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
ll maxx;
class Graph{
   map<ll,list<pair<ll,ll>> > l;
   public:
   void addedge(ll u,ll v,ll z){
        l[u].push_back(make_pair(v,z));    
        l[v].push_back(make_pair(u,z));
    }
   void dfs_helper(ll src,map<ll,bool> &visited,ll res){
       visited[src]=true;
       for(auto nbr:l[src]){
           if(!visited[nbr.first]){
               dfs_helper(nbr.first,visited,res+nbr.second);
           }
       }
       if(res>maxx)maxx=res;
   }
   void dfs(ll src){
         map<ll,bool> visited;
         for(auto node:l){
             visited[node.first]=false;
         }
         dfs_helper(src,visited,0);
   }
};
void solve(){
    ll n;
    cin>>n;
    Graph g;
    maxx=0;
    for(ll i=1;i<=n-1;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        g.addedge(x,y,z);
    }
    g.dfs(0);
    cout<<maxx<<endl;

}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}