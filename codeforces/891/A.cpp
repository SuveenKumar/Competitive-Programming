#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll one=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)one++;
    }
    if(one>0){
        cout<<n-one<<endl;
        return;
    }
    ll i,j;
    ll minn=MOD;
    for(i=0;i<n;i++){
        ll x=a[i];
        for(j=i+1;j<n;j++){
             x=__gcd(x,a[j]);
            if(__gcd(x,a[j])==1){
                  minn=min(j-i,minn);   
                  break;
            }
        }
       // cout<<minn<<endl;    
    }
    if(minn!=MOD)
    cout<<n+minn-1<<endl;
    else cout<<-1<<endl;
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