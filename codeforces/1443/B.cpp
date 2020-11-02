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
#define minheap priority_queue<int,vector<int>,greater<int>>
#define maxheap priority_queue<int>
#define repe(i,a) for(auto i:a)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=b-1;i>=a;i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); 
void solve(){
  ll a,b;
  cin>>a>>b;
  string s;
  cin>>s;
  ll i=0;
  vector<ll> one;
 rep(i,0,s.size()){
   if(s[i]=='1'){
    one.pb(i);
   }
 }
 if(one.size()==0){
  cout<<0<<endl;
  return;
 }
  vector<ll> zero;
  ll x=1;

  rep(i,1,one.size()){
    if(one[i]-one[i-1]>1){
      zero.pb(one[i]-one[i-1]-1);
      x++;
    }
  }
  sort(zero.begin(),zero.end());
   ll minm=x*a;
   ll y=0;
  rep(i,0,zero.size()){
    x--;
    y+=zero[i];
    ll res=x*a+y*b;
    minm=min(minm,res);
  }
  cout<<minm<<endl;
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
