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
#define minheap priority_queue<int,vector<int>,greater<int>>
#define maxheap priority_queue<int>
#define repe(i,a) for(auto i:a)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=b-1;i>=a;i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
bool inflation(ll *a,ll n,ll mid,ll d){
    ll currsum=a[0]+mid;
    rep(i,1,n){
      ll x=a[i]*100LL;
      if(ceil((ld)x/currsum)>d){
         return false;
      }
      currsum=currsum+a[i];
    }
    return true;
}
void solve(){
    ll n,d;
    cin>>n>>d;
    ll a[n];
    ll sum=0;
    rep(i,0,n){
      cin>>a[i];
      sum+=a[i];
    }
    ll l=0LL;
    ll r=100000000000LL;
    ll ans=100000000009LL;
    while(l<=r){
       ll mid=(l+r)/2LL;
       if(inflation(a,n,mid,d)){
         ans=min(ans,mid);
          r=mid-1LL;
       }
       else{
          l=mid+1LL;
       }
    }
   cout<<ans<<endl;
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