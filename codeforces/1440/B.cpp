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
  ll n,k;
  cin>>n>>k;
  ll num=n*k;
  ll a[num];
  ll x=ceil(n/2.0);
  x=n-x;
 // cout<<x<<endl;
  rep(i,0,num){
    cin>>a[i];
  }
 ll sum=0;
 ll cnt=0;

 for(ll i=num-x-1;i>=0;i-=(x+1)){
  if(cnt==k){
   break;
  }
  //cout<<a[i]<<endl;
   sum+=a[i];
   cnt++;
 }
cout<<sum<<endl;
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
