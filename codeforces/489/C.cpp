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
    ll n,m;
    cin>>n>>m;
    ll a[n]={0};
    ll x=m-1;
    ll min=0;
    if(n*9<m){
      cout<<-1<<" "<<-1<<endl;
      return;

    }
    if(m==0 && n==1){
       cout<<0<<" "<<0<<endl;
       return;
    }
    if(m==0 && n>1){
       cout<<-1<<" "<<-1<<endl;
       return;
    }
    rrep(i,0,n){
      if(i==0 && x>8){
         min=-1;
         break;
      }
      if(x>9){
         a[i]=9;
         x-=9;
      }
      else{
         a[i]=x;
         break;
      }
    } 
    string minm,maxm;
    if(min!=-1){
      a[0]+=1;
       rep(i,0,n){
           minm+=to_string(a[i]);
       }
    }
    ll b[n]={0};
    ll max=0;
    x=m;
    rep(i,0,n){
      if(i==n-1 && x>9){
        min=-1;
        break;
      }
      if(x>9){
         b[i]=9;
         x-=9;
      }
      else{
         b[i]=x;
         break;

      }
    }
     if(max!=-1){
       rep(i,0,n){
           maxm+=to_string(b[i]);
       }
    }
    if(minm.size()!=0)
    cout<<minm<<" ";
    else
      cout<<-1<<" ";
   if(maxm.size()!=0)
    cout<<maxm<<endl;
   else cout<<-1<<endl;
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