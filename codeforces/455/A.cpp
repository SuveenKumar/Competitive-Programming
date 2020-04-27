#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
int main() {
    ll n,a[100001];
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll freq[100001]={0};
    for(ll i=0;i<n;i++){
        freq[a[i]]++;
    }
    ll dp[100001];
    dp[0]=0;
    dp[1]=freq[1];
    for(ll i=2;i<=100000;i++){
        dp[i]=max(dp[i-1],dp[i-2]+freq[i]*i);
    }
    cout<<dp[100000]<<endl;
    return 0;
}