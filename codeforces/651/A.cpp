#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
ll solve1(ll x,ll y,ll ans=0){
    if(x==0 || y==0){
      return ans;
    }
    if(x==1 && y==1){
      return ans;
    }
    if(x<=y){
      return solve1(x+1,y-2,ans+1);
   }
   else{
       return solve1(x-2,y+1,ans+1);
   }
}
void solve(){
   ll x,y;
   cin>>x>>y;
   cout<<solve1(x,y)<<endl;
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