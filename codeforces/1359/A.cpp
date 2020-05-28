#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;

void solve(){
    long double n,m,k;
    cin>>n>>m>>k;
    ll person=n/k;
    if(m==0 || m==n){
        cout<<0<<endl;
        return;
    }
    if(person>=m){
        cout<<m<<endl;
        return;
    }
    else{
        m=m-person;
        k--;
        cout<<person-(ceil((m/k)))<<endl;
        return;
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
