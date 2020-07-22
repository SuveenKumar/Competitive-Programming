#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll ans[101];
    ll s=0;
    ll e=n-1;
    for(ll i=0;i<n;i+=2){
        ans[s]=a[i];
        s++;
        if(i+1<n){
        ans[e]=a[i+1];
        e--;
        }
    }
    for(ll i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
