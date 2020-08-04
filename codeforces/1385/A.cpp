#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if((a==b && a>=c)){
       cout<<"YES"<<endl;
       cout<<b<<" "<<c<<" "<<1<<endl;
    }
    else if((a==c && a>=b)){
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<1<<endl;
    }
    else if((b==c && b>=a)){
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<1<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}