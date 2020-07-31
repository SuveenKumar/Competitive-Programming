#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
   ll n;
   cin>>n;
   ll a[n];
   ll dp[5001]={0};
   for(ll i=0;i<n;i++){
      cin>>a[i];
      dp[a[i]]++;
   }
   sort(a,a+n);
   ll ans=MOD;
   for(ll i=1;i<=5000;i++){
       ll cntl=0;
       ll cntr=0;
       if(dp[i]!=0){
       for(ll j=1;j<i;j++){
             cntl+=dp[j]; 
       } 
       for(ll j=(2*i)+1;j<=5000;j++){
             cntr+=dp[j]; 
       }
       //cout<<i<<" "<<dp[i]<<" "<<cntl<<" "<<cntr<<endl;
       ans=min(ans,cntl+cntr);
   }
 }
   cout<<ans<<endl;
}
int main() {
    freopen("input.txt","rt", stdin);
    freopen("output.txt","wt", stdout);
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}