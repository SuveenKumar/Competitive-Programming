#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll x,y;
    cin>>x>>y;
    if(x==y){
        cout<<0<<endl;
    }
    else if(x>y){
        if((x-y)%2!=0){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    else{
         if((y-x)%2!=0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
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