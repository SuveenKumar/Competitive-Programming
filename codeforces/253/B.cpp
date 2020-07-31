#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
   ll n;
   cin>>n;
   ll a[n];
   for(ll i=0;i<n;i++){
      cin>>a[i];
   }
   sort(a,a+n);
   if(((double)a[n-1]/a[0])<=2){
        cout<<0<<endl;     
   }
   else{
       ll ans=MOD;
       for(ll i=-1;i<n;i++){
          ll x=upper_bound(a,a+n,2*(a[i+1]))-a;
          ans=min(ans,i+1+n-x);
       }
       cout<<ans<<endl;
   }
   
}
int main() {
    freopen("input.txt","rt", stdin);
    freopen("output.txt","wt", stdout);
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}