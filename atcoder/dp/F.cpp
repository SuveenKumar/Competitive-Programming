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
void solve(){
  st s,t;
  cin>>s>>t;
  ll dp[t.size()+1][s.size()+1];
  rep(i,0,s.size()){
    dp[0][i]=0;
  }
  rep(i,0,t.size()){
    dp[i][0]=0;
  }
  rep(i,1,t.size()){
    rep(j,1,s.size()){
       if(t[i-1]==s[j-1]){
          dp[i][j]=1+dp[i-1][j-1];
       }
       else{
          dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
       }
    }
  }
  // rep(i,0,t.size()){
  //   rep(j,0,s.size()){
  //       cout<<dp[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  st res;
  ll i,j;
  i=t.size();
  j=s.size();
  while(i>0 && j>0){
     if(dp[i][j]==dp[i-1][j]){
         i--;
     }
     else if(dp[i][j]==dp[i][j-1]){
         j--;
     }
     else{
         res=s[j-1]+res;
         i--;
         j--;
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