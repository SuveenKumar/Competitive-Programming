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
    ll laxtodd=0;
    ll laxteven=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0){
            odd++;
            laxtodd=i+1;
        }
        else{
            even++;
            laxteven=i+1;
        }
    }
    if(odd==1)
    cout<<laxtodd<<endl;
    else
    cout<<laxteven<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
