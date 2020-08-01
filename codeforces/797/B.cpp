#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v;
    ll minodd=MOD;
    ll minnegodd=-MOD;
    ll sum=0;
    for(ll i=0;i<n;i++){
        ll num;
        cin>>num;
        if(num>0){
           sum+=num;
        }
        if(num%2!=0){
            if(num<0)minnegodd=max(num,minnegodd);
            else minodd=min(num,minodd);
        }
    }
    if(sum%2!=0)cout<<sum<<endl;
    else{
        if(abs(minnegodd)<minodd)sum=sum-abs(minnegodd);
        else sum=sum-minodd;
        cout<<sum<<endl;
    }
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