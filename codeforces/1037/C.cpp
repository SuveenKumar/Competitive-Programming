#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
   ll n;
   cin>>n;
   string a,b;
   cin>>a>>b;
   ll cnt=0;
   for(ll i=0;i<n;i++){
     if(a[i]!=b[i] && a[i]==b[i+1] && a[i+1]!=b[i+1] && a[i+1]==b[i]){
        cnt++;
        i++;
     }
     else if(a[i]!=b[i]){
         cnt++;
     }
   }
   cout<<cnt<<endl;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}