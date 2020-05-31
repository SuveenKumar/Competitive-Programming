#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n,x;
    cin>>n>>x;
    ll a[n];
    ll odd=0;
    ll even=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
       for(ll i=1;i<=odd && i<=x;i+=2){
           if(even>=x-i){
               cout<<"Yes"<<endl;
               return;
           }
       }
       cout<<"No"<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
