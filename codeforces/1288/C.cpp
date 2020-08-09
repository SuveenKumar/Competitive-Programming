#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll nCrModp(ll n, ll r, ll p=MOD) 
{ 
    if (r > n - r) 
        r = n - r; 
    ll C[r + 1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;
    for (ll i = 1; i <= n; i++) { 
        for (ll j = min(i, r); j > 0; j--) 
            C[j] = (C[j] + C[j - 1]) % p; 
    } 
    return C[r]; 
} 
void solve(){
   ll n,k;
   cin>>n>>k;
   cout<<nCrModp(n+2*k-1,2*k)<<endl;
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