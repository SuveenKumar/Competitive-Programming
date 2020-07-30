#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    string table;
    cin>>table;
    string hand[5];
    for(ll i=0;i<5;i++){
        cin>>hand[i];
    }
    for(ll i=0;i<5;i++){
        if(hand[i][0]==table[0] || hand[i][1]==table[1]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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