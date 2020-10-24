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
bool isPrime(ll n) 
{ 
    // Corner case 
    if (n <= 1)  return false; 
  
    // Check from 2 to n-1 
    for (ll i=2; i<n; i++) 
        if (n%i == 0) 
            return false; 
  
    return true; 
} 
void solve(){
   ll n;
   cin>>n;
   ll a[n][n];
   rep(i,0,n-1){
    rep(j,0,n-1)
     a[i][j]=1;
   }
   ll x=7919-n+1;
   if(!isPrime(x)){
    rep(i,0,n-1){
     a[i][i]=x;
   }
   }
   else{
    x=7919-n+1-3;
   rep(i,0,n-2){
     a[i][i]=x;
     a[i][i+1]=4;
   }
   a[n-1][n-1]=x;
   a[n-1][0]=4;
   }
   rep(i,0,n-1){
     rep(j,0,n-1){
       cout<<a[i][j]<<" ";
     }
     cout<<endl;
   }
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
