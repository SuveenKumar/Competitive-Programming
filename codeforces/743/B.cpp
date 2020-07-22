#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll i;
    for(i=0;i<n;i++){
        ll div=k-pow(2,i);
        ll dv=pow(2,i+1);
        if(div%dv==0){
            cout<<i+1<<endl;
            return;
        }
    }
    
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
