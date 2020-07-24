#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll cnt=0;
    while(n>0){
        if(n>=100){
            cnt++;
            n-=100;
        }
        else if(n>=20){
            cnt++;
            n-=20;
        }
        else if(n>=10){
            cnt++;
            n-=10;
        }
        else if(n>=5){
            cnt++;
            n-=5;
        }
        else{
            cnt++;
            n--;
        }
    }
    cout<<cnt<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
