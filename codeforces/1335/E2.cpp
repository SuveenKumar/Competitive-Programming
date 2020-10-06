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
#define pii pair<int,int>
#define aint(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define repe(i,a) for(auto i:a)
#define st string
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rrep(i,a,b) for(int i=b;i>=a;i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); 
int sum(int l,int r,int dp[][201]){
  int maxm=0;
   rep(i,1,200){
      maxm=max(maxm,dp[r][i]-dp[l-1][i]);
   }
   return maxm;
}
void solve(){
   int n;
   cin>>n;
   int a[n];
   vector<int> adj[202];
   rep(i,0,n-1){
     cin>>a[i];
     adj[a[i]].pb(i);
   }
   int dp[n][201];
   rep(i,0,200){
      dp[0][i]=0;
   }
   dp[0][a[0]]=1;
   rep(i,1,n-1){
     rep(j,0,200)
      dp[i][j]=dp[i-1][j];
     dp[i][a[i]]=dp[i-1][a[i]]+1;
   }
   int res=0;
   rep(i,1,201){
     int start=0;
     int end=adj[i].size()-1;
     int ans=0;
     while(start<end){
        ans=max(2*(start+1)+sum(adj[i][start]+1,adj[i][end]-1,dp),ans);
       // cout<<i<<" "<<sum(adj[i][start]+1,adj[i][end]-1,dp)<<endl;
        start++;
        end--;
     }
     res=max(res,ans);
   }
   if(res==0)cout<<1<<endl;
   else
   cout<<res<<endl;
}
int main() {
    fast
    int t;
    cin>>t;
   while(t--)
    solve();
}