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
  string str;
  cin>>str;
  rep(i,0,str.size()){
     if(str[i]=='A' || str[i]=='H' ||str[i]=='I' 
        ||str[i]=='M' ||str[i]=='O' ||str[i]=='T' ||
        str[i]=='U' ||str[i]=='V' ||
        str[i]=='W' ||str[i]=='X' ||
        str[i]=='Y'){

     }
     else{
      cout<<"NO"<<endl;
      return;
 }
  }
    ll s=0;
    ll e=str.size()-1;
    while(s<e){
      if(str[s]!=str[e]){
        break;
      }
      s++;
      e--;
    }
    if(str.size()%2==0){
    if(s<e){
       cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
    else{
      if(str[str.size()/2]=='A' || str[str.size()/2]=='H' ||str[str.size()/2]=='I' 
        ||str[str.size()/2]=='M' ||str[str.size()/2]=='O' ||str[str.size()/2]=='T' ||
        str[str.size()/2]=='U' ||str[str.size()/2]=='V' ||
        str[str.size()/2]=='W' ||str[str.size()/2]=='X' ||
        str[str.size()/2]=='Y'){
         if(s<e){
       cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
      }
      else{
        cout<<"NO"<<endl;
      }
    }
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