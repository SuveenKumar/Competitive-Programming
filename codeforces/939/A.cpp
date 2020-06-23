#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
   ll n;
   cin>>n;
   ll a[n+1];
   for(ll i=1;i<=n;i++){
       cin>>a[i];
   }
   ll i;
   for(i=1;i<=n;i++){
       if(a[a[a[i]]]==i){
           break;
       }
   }
   if(i==n+1)
   cout<<"NO"<<endl;
   else
   cout<<"YES"<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
