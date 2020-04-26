#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll minm(ll n,ll a,ll b,ll c,ll* dp){
     if(n==0){
         return 0;
     }
     if(dp[n]!=0){
         return dp[n];
     }
     ll op1,op2,op3;
     op1=op2=op3=INT_MIN;
     if(n-a>=0)
     op1=1+minm(n-a,a,b,c,dp);
     if(n-b>=0)
     op2=1+minm(n-b,a,b,c,dp);
     if(n-c>=0)
     op3=1+minm(n-c,a,b,c,dp);
     ll ans=max(op1,max(op2,op3));
     dp[n]=ans;
     return dp[n];
}
int main() {
    ll n,a,b,c,dp[10001];
    cin>>n>>a>>b>>c;
    dp[10001];
    for(ll i=0;i<=n;i++){
        dp[i]=0;
    }
    cout<<minm(n,a,b,c,dp)<<endl;
    return 0;
}
