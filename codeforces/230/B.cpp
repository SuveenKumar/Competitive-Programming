#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
bool isprime(ll n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(ll i=3;i*i<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool ps(ll n){
    long double sq=sqrt(n);
    if(sq==floor(sq)){
        return true;
    }
    else{
        return false;
    }
}
void solve(){
    ll n;
    cin>>n;
    if(ps(n)&&isprime(sqrt(n))){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
