#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1000000007
#define INF 1000000009
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define so sizeof 
#define pii pair<ll,ll>
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define repe(i,a) for(auto i:a)
#define st string
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rrep(i,a,b) for(ll i=b;i>=a;i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); 
void solve(){
  ll n,a,b;
  cin>>n>>a>>b;
  string ans;
  ll i=0;
  string s;
   ll j;
     for(j=0;j<b-1;j++){
        ans+=(char)('a'+j);
     }
     for(ll k=0;k<a-b+1;k++){
       ans+=(char)('a'+j);
     }
     ll mul=(n/a);
     ll rem=n%a;
    // cout<<ans<<endl;
     while(mul){
      s+=ans;
      mul--;
     }
     s=s+ans.substr(0,rem);
  cout<<s<<endl;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    fast
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}