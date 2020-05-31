#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
bool lucky(ll n){
    while(n!=0){
        ll digit=n%10;
        //cout<<digit<<endl;
        if(digit!=4 && digit!=7){
            break;
        }
        n=n/10;
    }
    //cout<<n<<endl;
    if(n==0){
       return true;
    }
    else{
        return false;
    }
}
void solve(){
    ll num;
    cin>>num;
    for(ll i=4;i<=num;i++){
        if(num%i==0 && lucky(i)){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}
int main() { 
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
