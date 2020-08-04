#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll mm=0;
    ll mmv=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            mm=i+1;
            break;
        }
    }
// cout<<mm<<endl;
    ll maxx=0;
    for(ll i=0;i<mm-1;i++){
    //   cout<<maxx<<endl;
        if(a[i]>a[i+1]){
            maxx=i+1;
        }
    }
        cout<<maxx<<endl;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}