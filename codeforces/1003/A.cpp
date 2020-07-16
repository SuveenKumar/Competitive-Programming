#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin>>n;
    ll dp[101]={0};
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        dp[x]++;
    }
    ll maxm=0;
    for(ll i=0;i<101;i++){
        maxm=max(maxm,dp[i]);
    }
    cout<<maxm<<endl;
}
