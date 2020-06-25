#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n],b[k];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<k;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+k);
    ll count=0;
    ll s=0;
    ll end=n-1;
    ll i=0;
    for(i=0;i<k;i++){
        if(b[i]==1){
            count+=2*a[end];
            end--;
        }
        else{
            break;
        }
    }
    for(ll j=k-1;j>=i;j--){
            count+=(a[end]+a[s]);
            end--;
            s++;
            ll times=b[j]-2;
            while(times>0){
                s++;
                times--;
            }
    }
    cout<<count<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
