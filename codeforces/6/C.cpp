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
    rep(i,0,n){
      cin>>a[i];
    }
    ll s=0;
    ll e=n-1;
    ll lastmove=3;
    while(s<=e){
    // cout<<s<<" "<<e<<endl;
       if(s==e){
          if(lastmove==0){
            e--;
          }
          else{
            s++;
          }
          break;
       }
       if(a[s]>a[e]){
         a[s]-=a[e];
         e--;
         lastmove=1;
         
       }
       else if(a[s]<a[e]){
         a[e]-=a[s];
         s++;
         lastmove=0;
       }
       else{
         s++;
         e--;
         lastmove=3;
       }
    }
    cout<<s<<" "<<n-1-e<<endl;
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