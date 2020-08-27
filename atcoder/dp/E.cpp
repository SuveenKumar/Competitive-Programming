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
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rrep(i,a,b) for(ll i=b;i>=a;i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void solve(){
  ll n,w;
  cin>>n>>w;
  ll wt[n+1],val[n+1];
  rep(i,1,n){
    cin>>wt[i]>>val[i];
  }
  ll sum=accumulate(val+1,val+n+1,0);
  ll dp[n+1][sum+1];
  rep(i,1,n){
    rep(j,1,sum){
        dp[i][j]=INF;
    }
  }
  rep(i,0,n)dp[i][0]=0;
  rep(i,1,sum){
     if(i==val[1])
        dp[1][i]=wt[1];
  }
  rep(i,2,n){
    rep(j,1,sum){
    if(j<val[i]){
       dp[i][j]=dp[i-1][j];
    }
    else{
       dp[i][j]=min(dp[i-1][j],wt[i]+dp[i-1][j-val[i]]);
    }
    }
  }
  ll res=0;
  rep(i,1,sum){
    if(dp[n][i]<=w){
        res=i;
    }
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