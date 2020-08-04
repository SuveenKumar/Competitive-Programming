#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll freq[n+1]={0};
  //  memset(freq,0,n+1);
    for(ll i=0;i<2*n;i++){
         ll x;
         cin>>x;
         if(freq[x]==0){
            cout<<x<<" ";
         }
         freq[x]++;
    }
    cout<<endl;
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