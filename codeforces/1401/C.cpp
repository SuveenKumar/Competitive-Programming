#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
  ll n;
  cin>>n;
  ll a[n],b[n];
  ll minm=MOD;
  for(ll i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i];
    if(a[i]<minm)minm=a[i];
  }

  sort(b,b+n);
  ll i=0;
  bool sort[n];
  memset(sort,0,sizeof(sort));
 // for(ll i=0;i<n;i++){cout<<sort[i]<<endl;}
  for(ll i=0;i<n;i++){
    if(a[i]==b[i] || (a[i]%minm)==0)sort[i]=true;
  }
//  for(ll i=0;i<n;i++){cout<<a[i]<<" ";}
  for(ll i=0;i<n;i++){
    if(sort[i]==0){
       cout<<"NO"<<endl;
       return;
    }
  }
  cout<<"YES"<<endl;
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