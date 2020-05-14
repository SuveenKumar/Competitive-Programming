#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
ll total(ll* a,ll n){
    ll count=0;
    for(ll i=0;i<n;i++){
        if(a[i]==1){
            count++;
        }
    }
    return count;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll count=-1;
    for(ll i=0;i<n;i++){
        for(ll j=i;j<n;j++){
            ll max=0;
            ll k;
            for(k=i;k<=j;k++){
                if(a[k]==0){
                    a[k]=1;
                }
                else{
                    a[k]=0;
                }
            }
            ll ans=total(a,n);
            if(ans>count){
                count=ans;
            }
            for(k=i;k<=j;k++){
                if(a[k]==0){
                    a[k]=1;
                }
                else{
                    a[k]=0;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
