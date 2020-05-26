#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n,m;
    cin>>n>>m;
    if(m%2==0 && n%2==0){
        cout<<n*(m/2)<<endl;
    }
    else if(m%2==0 && n%2!=0){
        cout<<m*((n-1)/2)+(m/2)<<endl;
    }
    else if(m%2!=0 && n%2==0){
        cout<<n*((m-1)/2)+(n/2)<<endl;
    }
    else{
        cout<<n*((m-1)/2)+(n+1)/2<<endl;
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
