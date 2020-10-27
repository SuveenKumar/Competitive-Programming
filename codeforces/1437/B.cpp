#include <bits/stdc++.h>
using namespace std;
#define ll int
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
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rrep(i,a,b) for(ll i=b;i>=a;i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); 
void solve(){
  ll n;
  cin>>n;
  string a;
  cin>>a;
  
  vector<ll> zero;
  vector<ll> one;
  rep(i,0,n-1){
    if(a[i]=='0'){
       zero.pb(i);
    }
    else{
      one.pb(i);
    }
  }
  ll maxz=0;
  ll maxo=0;
  ll x=1;
 // cout<<zero.size()<<" "<<one.size()<<endl;
  // rep(i,0,one.size()-1){
  //   cout<<one[i]<<" ";
  // }
  // cout<<endl;
  map<ll,ll> cono;
  map<ll,ll> conz;
  if(zero.size()>1){
  rep(i,0,zero.size()-2){
     if(zero[i+1]-zero[i]==1){
       x++;
     }
     else{
      //maxz=max(maxz,x);
      conz[x]++;
     x=1;
     }
  }
}
  maxz=max(maxz,x);
  conz[x]++;
  x=1;
  if(one.size()>1){
   rep(i,0,one.size()-2){
     if(one[i+1]-one[i]==1){
     // cout<<"asd"<<endl;
       x++;
     }
     else{
      maxo=max(maxo,x);
      cono[x]++;
      x=1;
     }
  }
  }
  cono[x]++;
  maxo=max(maxo,x);
  ll ans1=0;
  repe(i,cono){
   // cout<<i.ff<<endl;
    if(i.ff!=1)
    ans1+=(i.ff-1)*i.ss;
  }
   ll ans2=0;
  repe(i,conz){
    if(i.ff!=1)
    ans2+=(i.ff-1)*i.ss;
  }
 //cout<<ans1<<" "<<ans2<<endl;
  cout<<max(ans2,ans1)<<endl;
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
