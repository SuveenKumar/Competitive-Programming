#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n,q;
    cin>>n>>q;
    ll a[n+5];
    bool freq[1000000]={0};
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    ll count=0;
    ll cumm[n+5];
    for(ll i=n;i>=1;i--){
        if(freq[a[i]]==false){
            count++;
            freq[a[i]]=true;
            cumm[i]=count;
        }
        else{
            cumm[i]=count;
        }
    }
    while(q--){
        ll l;
        cin>>l;
        cout<<cumm[l]<<endl;
    }
    return 0;
}
