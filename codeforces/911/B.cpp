#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll minn=min(a,b/(n-1));
    for(ll i=2;i<=n-1;i++){
        minn=max(minn,min(a/i,b/(n-i)));
    }
    cout<<minn<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
