#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
template<typename T>
class Graph{
    public:
   map<T,T> l;
   
   void addedge(T u,T v){
    	l[u]=v;    
    }
   bool dfs_helper(T src,ll t){
       if(src==t){
           return true;
       }
       if(src>t){
           return false;
       }
       return dfs_helper(src+l[src],t);
   }
   void dfs(T src,ll t){
         if(dfs_helper(src,t))
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
   }
};
void solve(){
  ll n,t;
  cin>>n>>t;
  ll a;
  Graph<ll> g;
  for(ll i=1;i<=n-1;i++){
      cin>>a;
      g.addedge(i,a);
  }
  g.dfs(1,t);
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
     solve();
    return 0;
}
