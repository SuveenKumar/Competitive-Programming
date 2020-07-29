#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
      string s;
      cin>>s;
      ll n=s.size();
      ll freq[10]={0};
      for(ll i=0;i<n;i++){ 
        freq[s[i]-'0']++;
      }
      ll maxm=MOD;
      for(ll i=0;i<10;i++){
        ll ans=n-freq[i];
         maxm=min(maxm,ans);
      }
      for(ll i=0;i<=9;i++){
        for(ll j=0;j<=9;j++){
            char find=(char)(i+'0');
            if(i!=j){

                ll pairs=0;
            for(ll k=0;k<n;k++){
                if(find==(char)(i+'0') && s[k]==find){
                    find=(char)(j+'0');
                }
                else if(find==(char)(j+'0') && s[k]==find){
                    find=(char)(i+'0');
                    pairs++;
                }
            }
            ll val=n-(2*pairs);
            maxm=min(val,maxm);

        }
       }
      }
      cout<<maxm<<endl;
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