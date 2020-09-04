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
 ll n,s;
 cin>>n>>s;
 ll num=n;
 ll sum=0;
 while(num>0){
   sum+=(num%10);
   num/=10;
 }
 ll steps=0;
 ll mul=1;
 if(sum<=s){
   cout<<0<<endl;
   return;
 }
 while(n>0){
    steps+=(mul*(10-n%10));
    n=n/10;
    if(n==0){
      break;
    }
    n++;
  //  cout<<n<<" "<<sum<<endl;
    mul*=10;
    num=n;
    sum=0;
  //  cout<<n<<endl;
    while(num>0){
      sum+=(num%10);
      num/=10;
    }
    if(sum<=s){
      break;
    }
 }
 cout<<steps<<endl;
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