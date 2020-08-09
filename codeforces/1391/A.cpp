#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve(){
   ll n,k;
   cin>>n;
   ll odd=1;
   ll i=1;
   ll j=n;
   while(i<=j){
    if(odd){
        cout<<i<<" ";
        i++;
    }
    else{
      cout<<j<<" ";
      j--;
   }
    odd=1-odd;
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