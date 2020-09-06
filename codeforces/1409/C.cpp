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
  ll minm,mina,minb;
  minm=INF;
  vector<ll> v;
  for(ll i=1;i<=a;i++){
    for(ll j=1;j<=b;j++){
         bool afnd=0,bfnd=0;
         vector<ll> x;
        for(ll k=0;k<=n-1;k++){
            ll num=i+k*j;
            x.push_back(num);
            if(num==a)afnd=1;
            if(num==b)bfnd=1;
        }
        if(afnd==1&&bfnd==1){
            if(x[x.size()-1]<minm){
              v=x;
              minm=x[x.size()-1];
            }

        }
        x.clear();
        afnd=0;
        bfnd=0;
     }
   }
   rep(i,0,v.size()-1){
    cout<<v[i]<<" ";
   }
   cout<<endl;
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