#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    ll n=s.length();
    ll a[n+1];
    ll count=0;
    a[0]=0;
    for(ll i=1;i<=n-1;i++){
        if(s[i-1]==s[i]){
            count++;
            a[i]=count;
        }
        else{
            a[i]=count;
        }
    }
    a[n]=a[n-1];
    ll q;
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    return 0;
}
