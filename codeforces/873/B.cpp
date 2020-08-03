#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> dp(n+1,0);
    map<ll,pair<ll,ll>> mapp;
  //  cout<<dp[2].first<<Endl;
    ll one=0;
    ll zero=0;
    for(ll i=1;i<=n;i++){
        if(s[i-1]=='1')one++;
        else zero++;
        dp[i]=one-zero;
    }
    // for(ll i=1;i<=n;i++){
    //     cout<<dp[i]<<" ";
    // }
    //cout<<endl;
    mapp[0].first=0;
    for(ll i=1;i<=n;i++){
     if(mapp.find(dp[i])==mapp.end()){
        mapp[dp[i]].first=i;
     }   
     else{
        mapp[dp[i]].second=i;
     }
    }
    ll maxx=0;
    for(auto i:mapp){
        if(i.second.second!=0)
        maxx=max(i.second.second-i.second.first,maxx);
       // cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
    }
    // for(auto i:mapp){
    //     //if(i.second.second!=0)
    //    // maxx=max(i.second.second-i.second.first,maxx);
    //     cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
    // }
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