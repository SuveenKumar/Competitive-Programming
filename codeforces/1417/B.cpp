#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
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
   ll n,k;
   cin>>n>>k;
   ll a[n];
   rep(i,0,n-1){
    cin>>a[i];
   }
   //sort(a,a+n);
   map<ll,ll> w;
   map<ll,ll> b;
   rep(i,0,n-1){
     if(w[k-a[i]]<b[k-a[i]]){
         w[a[i]]++;
     }
     else{
        b[a[i]]++;
     }
   }
   rep(i,0,n-1){
     if(w.find(a[i])!=w.end()&&w[a[i]]!=0){
        cout<<0<<" ";
        w[a[i]]--;
     }
     else{
       cout<<1<<" ";
       b[a[i]]--;
     }
   }
   cout<<endl;
   //cout<<res<<endl;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    fast
    ll t;
    cin>>t;
    while(t--){
    solve();
  }
    return 0;
}