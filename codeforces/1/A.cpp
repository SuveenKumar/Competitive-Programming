#include <bits/stdc++.h>
#define ll long double
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n,m,a;
    cin>>n>>m>>a;
    cout<<(long long)(ceil(n/a)*ceil(m/a))<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
