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
    ll minn=MOD;
    ll mini;
    for(ll i=0;i<n;i++){
        long double val=ceil((a[i]-i)/(double)n);
        ll res=i+val*n;
        if(res<minn){
            minn=res;
            mini=i;
        }
    }
    cout<<mini+1<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
