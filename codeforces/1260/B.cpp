#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n,k;
    cin>>n>>k;
    if(n==0 && k==0){
         cout<<"YES"<<endl;
       return;
    }
    if(k>2*n || n>2*k){
         cout<<"NO"<<endl;
        return;
    }
    if(n==0 || k==0){
        cout<<"NO"<<endl;
        return;
    }
    if((n+k)%3==0){
       cout<<"YES"<<endl;
       return;
    }
    else{
        cout<<"NO"<<endl;
        return;
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
