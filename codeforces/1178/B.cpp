#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
  string s;
  cin>>s;
  ll currsum=0;
  ll maxsum=0;
  ll ans=0;
  for(ll i=0;i<s.size()-1;i++){
    if(s[i]=='v' && s[i+1]=='v'){
        maxsum++;
    }
}
  for(ll i=0;i<s.size()-1;i++){
    if(s[i]=='v' && s[i+1]=='v'){
        currsum++;
        maxsum--;
    }
    else if(s[i]=='o'){
        ans+=(currsum*maxsum);
    }
  }
   cout<<ans<<endl;
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