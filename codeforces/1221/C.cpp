#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll c,m,x;
    cin>>c>>m>>x;
    ll s=1;
    ll e=min(c,m);
    ll res=0;
    while(s<=e){
        ll mid=(s+e)/2;
        if(mid<=(x+c+m-2*mid)){
            res=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<res<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
