#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll i;
    ll odd=0;
    ll even=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0){
            odd++;
        }
        else{
            even++;
        }
    }
    if(odd==1){
        for(i=0;i<n;i++){
        if(a[i]%2!=0){
            break;
        }
    }
    }
    else{
        for(i=0;i<n;i++){
        if(a[i]%2==0){
            break;
        }
    }
    }
    cout<<i+1<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
