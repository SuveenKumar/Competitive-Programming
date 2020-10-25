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
  int a[6];
  rep(i,0,5){
    cin >> a[i];
  }
  
  set<int> ids;
  int n;
  cin >> n;
  ll b[n];
    int c[n][6];
  rep(i,0,n-1){
    cin >> b[i];
    rep(j,0,5){
      int val = b[i] - a[j];
      if(val < 0) val = INF;
      c[i][j] = val;
      ids.insert(val);
    }
    sort(c[i],c[i]+6);
  }
  
  set<pair<int, pair<int,int>>> vals;
  rep(i,0,n-1){
    vals.insert({c[i][0],{i,0}});
  }
  int ans = INF;
  bool flag = 0;
  for(int id:ids){
    while(vals.begin()->ff < id){
      auto tmp = *vals.begin();
      vals.erase(tmp);
      if(tmp.ss.ss == 5){
        flag = 1;
        break;
      }
      vals.insert({c[tmp.ss.ff][tmp.ss.ss+1],{tmp.ss.ff,tmp.ss.ss+1}});
    }
    if(flag) break;
    ans=min(ans, vals.rbegin()->ff - id);
  }
  cout << ans<<endl;
}
  int main() {
      #ifndef ONLINE_JUDGE
      freopen("input.txt","r", stdin);
      freopen("output.txt","w", stdout);
  #endif
      fast
      // ll t;
      // cin>>t;
      // while(t--)
        solve();
      return 0;
  }
