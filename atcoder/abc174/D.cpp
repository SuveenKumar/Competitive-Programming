#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll w=0,r=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='R')r++;
        else w++;
    }
    ll res=0;
    for(ll i=0;i<r;i++){
       if(s[i]=='W')res++;
    }
    cout<<res<<endl;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}