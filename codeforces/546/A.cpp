#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;

void solve(){
    ll k,s,n;
    cin>>k>>s>>n;
    ll sum=(n*(2*k+(n-1)*k))/2;
    if(sum-s>0)
    cout<<sum-s<<endl;
    else
    cout<<0<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
