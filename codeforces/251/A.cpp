#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n,d;
    cin>>n>>d;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll cnt=0;
    for(ll i=0;i<n;i++){
       ll j=upper_bound(a+i,a+n,a[i]+d)-a;
      // cout<<j<<endl;
       cnt=cnt+((j-i-2)*(j-i-1))/2;
    }
    cout<<cnt<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}