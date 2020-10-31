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
  ll n;
  cin>>n;
  ll a[n];
  ll cnt0=0;
  ll cnt1=0;
  rep(i,0,n){
    cin>>a[i];
    if(a[i]==0){
      cnt0++;
    }
  }
  cnt1=n-cnt0;
  if(cnt0>=n/2){
     cout<<n/2<<endl;
    rep(i,0,n/2){
      cout<<0<<" ";
    }
    cout<<endl;
    return;
  }
  else{
    if((n/2)%2==0){
       cout<<n/2<<endl;
       rep(i,0,n/2){
        cout<<1<<" ";
       }
       cout<<endl;
       return;
    }
    else{
      cout<<n/2+1<<endl;
      rep(i,0,n/2+1){
        cout<<1<<" ";
      }
      cout<<endl;
      return;
    }
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
