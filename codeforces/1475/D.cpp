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
void solve(){
   ll n,m;
   cin>>n>>m;
   ll mem[n];
   ll point[n];
   map<pii,ll> mapp;
   vector<ll> one,two;
   rep(i,0,n){
      cin>>mem[i];
    }
    ll sum=0;
    rep(i,0,n){
      cin>>point[i];
      if(point[i]==1){
        one.pb(mem[i]);
      }
      else{
        two.pb(mem[i]);
      }
    }
    sort(one.begin(),one.end(),greater<ll>());
    sort(two.begin(),two.end(),greater<ll>());
    ll j=0;
    rep(i,0,one.size()){
       sum+=one[i];
       j++;
       if(sum>=m){
         break;
       }
    }
    ll ans=INF;
    if(sum>=m){
      ans=j;
    }
    rep(i,0,two.size()){
       sum+=two[i];
       // cout<<sum<<endl;
       while(j>=1){
         ll x=one[j-1];
         if(sum-x>=m){
             sum-=x;
             j--;
         }
         else{
           break;
         }
       }
       // cout<<sum<<endl;
       if(sum>=m)
       ans=min(ans,2*(i+1)+j);
    }
    if(sum<m){
      cout<<-1<<endl;
      return;
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