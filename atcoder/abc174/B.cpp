#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define MOD 1000000007 
using namespace std;
void solve(){
  ll n,d;
  cin>>n>>d;
  ll x,y;
  ll res=0;
  for(ll i=0;i<n;i++){
    ld x,y;
    cin>>x>>y;
    ld ans=sqrt((x*x)+(y*y));
    if(ans<=d)res++;
  }
  cout<<res<<endl;
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