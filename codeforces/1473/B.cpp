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
    string a,b;
    cin>>a>>b;
    if(a.size()>b.size()){
       swap(a,b);
    }
    string s;
    bool ok=1;
    ll num1=0;
    ll x=0;
    for(ll i=1;i<=a.size();i++){
      if(a.size()%i==0){
        x=i;
        s=a.substr(0,x);
        for(ll j=0;j<a.size();){
          x=i;
          // cout<<s<<endl;
           if(a.substr(j,x)!=s){
               ok=0;
               break;
           }
           num1++;
           j+=x;
        }
        if(ok)break;
        else if(ok==0 && x==a.size()){
          break;
        }
      }
      num1=0;
      ok=1;
    }
    ll num2=0;
    for(ll j=0;j<b.size();){
        if(b.substr(j,x)!=s){
               ok=0;
               break;
        }
        num2++;
        j+=x;
    }
    if(ok){
      ll times=(num1*num2)/__gcd(num1,num2);
      rep(i,0,times){
        cout<<s;
      }
      cout<<endl;
      return;
    }
    cout<<-1<<endl;
    
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