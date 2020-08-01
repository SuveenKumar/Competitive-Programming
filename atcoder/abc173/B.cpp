#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    unordered_map<string,ll>freq;
    for(auto i:freq)i.second=0;
    while(n--){
        string s;
        cin>>s;
        freq[s]++;
    }
    cout<<"AC x "<<freq["AC"]<<endl;
    cout<<"WA x "<<freq["WA"]<<endl;
    cout<<"TLE x "<<freq["TLE"]<<endl;
    cout<<"RE x "<<freq["RE"]<<endl;
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