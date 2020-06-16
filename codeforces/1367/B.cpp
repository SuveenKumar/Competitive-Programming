#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll count=0;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll odd=0;
    ll even=0;
    for(ll i=0;i<n;i++){
        if(a[i]%2==0 && i%2!=0){
            even++;
        }
        else if(a[i]%2!=0 && i%2==0){
            odd++;
        }
    }
    if(odd==even){
        cout<<odd<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
