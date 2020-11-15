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
  void query(vector <ll> &a, ll l ,ll r, ll x)
{
    
    // step 3
    a[l]=a[l]+x;
    a[r+1]=a[r+1]-x;
}
vector <ll> initializediff(vector <ll> &a)
{
    ll n=a.size();
    
    vector<ll> diff(n+1);// (n+1)to overcome when the right index given to us might be the last element of array 
    
    diff[0]=a[0]; // applying changes except at the starting index 
    diff[n]=0;
    
    for(ll i=1;i<n;i++)
    {
        diff[i]=a[i]-a[i-1]; //Step 1
    }
    return diff;// returning the difference array
}
  void solve(){
    ll s,t,p;
    ll n,tot;
    cin>>n>>tot;
       vector<ll> a;
    rep(i,0,200001){
      a.pb(0);
    }
    vector <ll> diff=initializediff(a);
    rep(i,0,n){
       cin>>s>>t>>p;
       query(diff,s,t-1,p);
    }
    for(ll i=0;i<200001;i++)
    {
        // Copy the first element as it is
        if(i==0)
        {
            a[i]=diff[i];
        }
        else
        {
            a[i]=diff[i]+a[i-1]; //Step 3;
        }
        
    }
    // rep(i,0,11){
    //     cout<<a[i]<<endl;
    // }
    rep(i,0,200001){
        if(a[i]>tot){
        //   cout<<i<<" "<<a[i]<<" "<<tot<<endl;
          cout<<"No"<<endl;
          return;
        }
    }
    cout<<"Yes"<<endl;
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
