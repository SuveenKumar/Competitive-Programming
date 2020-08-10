#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll power(ll x,ll y){  
    ll res = 1;
    for(ll i=1;i<=y;i++){
        res=(res*x)%MOD;
    }
    return res;  
}
ll fact(ll n) 
{ 
    ll result = 1; 
    for (ll i = 1; i <= n; i++) 
        result = (result * i) % MOD; 
    return result; 
} 
void solve(){
   ll n;
   cin>>n;
   cout<<(fact(n)-power(2,n-1)+MOD)%MOD<<endl;
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