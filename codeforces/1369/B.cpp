#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()==1){
        cout<<s<<endl;
        return;
    }
    string s2;
    ll end=s.size()-1;
    while(end>=0 && s[end]!='0'){
        end--;
    }
    ll i=0;
    while(i<end && s[i]=='0'){
        i++;
    }
   // cout<<i<<" "<<end<<endl;
   if(i-1==end){
        cout<<s.substr(0,i)+s.substr(end+1,s.size()-end)<<endl;
        return;
   }
    cout<<s.substr(0,i)+'0'+s.substr(end+1,s.size()-end)<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
