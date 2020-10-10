#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
#define rep(i,a,b) for( i=a;i<=b;i++)
#define rrep(i,a,b) for(ll i=b;i>=a;i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); 

void fillPrefixSum(ll arr[], ll n, ll prefixSum[]) 
{ 

    prefixSum[0] = arr[0]; 

  

    // Adding present element 

    // with previous element 

    for (ll i = 1; i < n; i++) 

        prefixSum[i] = prefixSum[i - 1] + arr[i]; 
} 
void solve(){
   ll n;
   cin>>n;
   ll a[n];
   ll sum=0;
   ll minm=INF;
   ll maxm=-100;
   ll b[n];
   ll i;
   rep(i,0,n-1){cin>>a[i];sum+=a[i];
   maxm=max(a[i],maxm);minm=min(a[i],minm);
   }
   sort(a,a+n,greater<ll>());
   fillPrefixSum(a,n,b);
   rep(i,0,n-1){
     if(b[i]==0)break;
   }
   if(i==n){cout<<"YES"<<endl;
   rep(i,0,n-1){cout<<a[i]<<endl;}return;}
    sort(a,a+n);
   fillPrefixSum(a,n,b);
    rep(i,0,n-1){
     if(b[i]==0)break;
   }
  if(i==n){cout<<"YES"<<endl;
   rep(i,0,n-1){cout<<a[i]<<endl;}return;}
   cout<<"NO"<<endl;return;
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