#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
   ll n,k;
   cin>>n>>k;
   if(n==k){
     cout<<0<<endl;
   }
   else if(n<k){
     cout<<k-n<<endl;
   }
   else{
    if((n-k)%2==0)
    cout<<0<<endl;
    else
      cout<<1<<endl;
   }
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}