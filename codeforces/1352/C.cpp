#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n,k;
    cin>>n>>k;
    if(k>n){
        if(k%(n-1)!=0){
        cout<<(k/(n-1))*n+(k%(n-1))<<endl;
        return;
        }
        else{
              cout<<(k/(n-1))*n-1<<endl;
              return;
        }
    }
    if(k<n){
        cout<<k<<endl;
        return;
    }
    cout<<n+1<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
