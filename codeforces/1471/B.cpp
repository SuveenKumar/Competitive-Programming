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
void solve()
{  
   ll n,x;
   cin>>n>>x;
   vector<pii> v;
   rep(i,0,n){
    ll x;
    cin>>x;
    v.pb({x,1});
   }
   rep(i,0,v.size()){
      if((v[i].ff%x)==0){
        ll f=v[i].ff/x;
        ll s=v[i].ss*x;
        v.pb({f,s});
      }
      else
        break;
   }
   ll res=0;
   repe(i,v){
    //cout<<i.ff<<" "<<i.ss<<endl;
      res+=(i.ff*i.ss);
   }
   cout<<res<<endl;

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