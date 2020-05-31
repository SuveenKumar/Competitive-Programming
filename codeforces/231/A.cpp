#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll total=0;
        for(ll i=0;i<3;i++){
            cin>>a[i];
            total+=a[i];
        }
        if(total>=2){
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main() { 
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
