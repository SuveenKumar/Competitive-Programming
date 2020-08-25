#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
   string s;
   cin>>s;
   if(s.size()==1){
      cout<<s<<endl;
   }
   else{
      string s1;
      for(ll i=0;i<n;i++){
          ll ans=0; 
           for(ll j=i;j<(n+i);j++){
              ans=(ans|(s[j]-'0'));
              //cout<<ans<<endl;
           }
           char res=(char)(ans+'0');
           ans=0;
           s1+=res;
      }
      cout<<s1<<endl;
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
    while(t--) solve();
    return 0;
}