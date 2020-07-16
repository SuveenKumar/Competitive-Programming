#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
ll fact(ll n){
    if(n==1)return 1;
    else
    return n*fact(n-1);
}
void solve(){
    ll x,y;
    cin>>x>>y;
    cout<<fact(min(x,y))<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
