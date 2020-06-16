#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    string s,a;
    cin>>s;
    a+=s[0];
    
    for(ll i=1;i<s.size()-1;i+=2){
        a+=s[i];
    }
    a=a+s[s.size()-1];
    cout<<a<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
