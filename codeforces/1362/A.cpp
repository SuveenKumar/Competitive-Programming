#include <bits/stdc++.h>
#define ll long double
#define MOD 1000000007 
using namespace std;
void solve(){
    ll a,b;
    cin>>a>>b;
    ll x;
    if(a>=b){
        x=a/b;
    }
    else{
        x=b/a;
    }
    if(x==1){
        cout<<0<<endl;
        return;
    }
    ll count=0;
    if(log2(x)>=1 &&log2(x)==floor(log2(x))){
        ll res=log2(x);
          while(res){
              if(res>=3){
                  count++;
                  res-=3;
              }
              else if(res>=2){
                  count++;
                  res-=2;
              }
              else if(res>=1){
                  count++;
                  res-=1;
              }
          }
    }
    else{
        cout<<-1<<endl;
        return;
    }
    cout<<count<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
