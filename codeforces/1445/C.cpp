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
ll temp(ll i,ll p,ll q){
  if(i==1)return 1;
  ll t=p;
  while(t%q==0)
    t/=i;
  return t;
}
void solve(){
  ll p,q;
    cin>>p>>q;
    if(p%q==0)
    {
      ll ans=1;
      for(ll i=1;i*i<=q;++i)
        if(q%i==0)
        {
          ans=max(ans,temp(i,p,q));
          ans=max(ans,temp(q/i,p,q));
        }
      cout<<ans<<endl;
    }
    else
      cout<<p<<endl;
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
