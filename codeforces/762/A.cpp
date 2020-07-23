#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(i!=n/i)
            v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(k>v.size()){
        cout<<-1<<endl;
        return;
    }
    cout<<v[k-1]<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
