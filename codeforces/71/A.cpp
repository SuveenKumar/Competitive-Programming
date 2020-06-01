#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
  string s;
  cin>>s;
  if(s.size()<=10){
      cout<<s<<endl;
  }
  else{
      cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
  }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
