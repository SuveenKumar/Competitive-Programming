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
vector<ll> primeFactors(ll n)  
{  
  vector<ll> v;
    while (n % 2 == 0)  
    {  
        v.pb(2);  
        n = n/2;  
    }  
    for (ll i = 3; i*i <=n; i = i + 2)  
    {  
  
        while (n % i == 0)  
        {  
            v.pb(i); 
            n = n/i;  
        }  
    }  
    if (n > 2)  
        v.pb(n);
  return v;  
}  
void solve(){
   ll n;
   cin>>n;
   vector<ll> v;
   v=primeFactors(n);
   map<ll,ll> pf;
   rep(i,0,v.size()){
     pf[v[i]]++;
   }
   vector<ll> ans;
   ll maxm=0;
   ll maxnum=0;
   repe(i,pf){
    //  cout<<i.ff<<" "<<i.ss<<endl;
      if(i.ss>maxm){
        maxm=i.ss;
        maxnum=i.ff;
      }
   }
   ll x;
   if(maxm==1){
    x=n;
   }
   else
     x=n/pow(maxnum,maxm-1);
   cout<<maxm<<endl;
   rep(i,0,maxm-1){
     cout<<maxnum<<" ";
   }
   cout<<x<<endl;
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