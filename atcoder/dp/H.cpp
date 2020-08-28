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
  ll n,m;
  cin>>n>>m;
  char grid[n][m];
  ll dp[n][m];
  rep(i,0,n-1){
    rep(j,0,m-1){
      dp[i][j]=-1;
    }
  }
  rep(i,0,n-1){
    rep(j,0,m-1){
        cin>>grid[i][j];
    }
  }
  rep(i,0,n-1){
    rep(j,0,m-1){
        if(grid[i][j]=='#'){
            dp[i][j]=0;
        }
    }
  }
  rep(i,0,m-1){
     if(dp[0][i]!=0){
        dp[0][i]=1;
     }
     else{
        rep(j,i,m-1){
            dp[0][j]=0;
        }
        break;
     }
  }
  rep(i,0,n-1){
     if(dp[i][0]!=0){
        dp[i][0]=1;
     }
     else{
        rep(j,i,n-1){
            dp[j][0]=0;
        }
        break;
     }
  }
  rep(i,1,n-1){
    rep(j,1,m-1){
       if(dp[i][j]!=0)
       dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
    }
  }
  cout<<dp[n-1][m-1]<<endl;
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