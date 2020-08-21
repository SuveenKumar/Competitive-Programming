#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
   ll a0,a1,a2,b0,b1,b2;
   cin>>a0>>a1>>a2>>b0>>b1>>b2;
   if(a2<=b1){
     if(b2<=a0)
     cout<<2*min(b1,a2)<<endl;
     else
      cout<<2*min(b1,a2)-2*(b2-a0)<<endl;
   }
    else{
    if(b2<=(a0+(a2-b1)))
     cout<<2*min(b1,a2)<<endl;
     else
      cout<<2*min(b1,a2)-2*(b2-(a0+a2-b1))<<endl;
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