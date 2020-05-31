#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
bool found(ll n){
    ll freq[10]={0};
    while(n){
        freq[n%10]++;
        n/=10;
    }
    ll i;
    for(i=0;i<10;i++){
        if(freq[i]>1){
            break;
        }
    }
    if(i==10){
        return true;
    }
    else{
        return false;
    }
}
void solve(){
    ll n;
    cin>>n;
    while(1){
        n++;
        if(found(n)){
            break;
        }
    }
    cout<<n<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
