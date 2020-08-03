#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    string s;
    cin>>s;
    ll ab=0,ba=0;
    if(s.substr(0,2)=="AB")ab++;
    else if(s.substr(0,2)=="BA")ba++;
    for(ll i=1;i<s.size()-1;i++){
        if(s.substr(i,2)=="AB"){
            if(s.substr(i-1,2)=="BA"){
                if(ba>1){
                  cout<<"YES"<<endl;
                  return;
                }
                else{
                    ab++;
                }
            }
            else if(ba>0){
                  cout<<"YES"<<endl;
                  return;
            }
            else{
               ab++;
            }

        }
        else if(s.substr(i,2)=="BA"){
            if(s.substr(i-1,2)=="AB"){
                if(ab>1){
                  cout<<"YES"<<endl;
                  return;
                }
                else{
                    ba++;
                }
            }
            else if(ab>0){
                  cout<<"YES"<<endl;
                  return;
            }
            else{
               ba++;
            }
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