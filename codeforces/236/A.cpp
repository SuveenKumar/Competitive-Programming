#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    string s;
    cin>>s;
    ll freq[26]={0};
    for(ll i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    ll total=0;
    for(ll i=0;i<26;i++){
        if(freq[i]!=0){
            total++;
        }
    }
    if(total%2){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
}
int main() { 
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
