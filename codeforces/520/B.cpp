#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n,m;
    cin>>n>>m;
    if(n==m){
        cout<<0<<endl;
        return;
    }
    if(n>m){
        cout<<n-m<<endl;
    }
    else{
         ll count=0;
        while(m>n){
            if(m%2==0){
            count++;
            m=m/2;
            }
            else{
                m++;
                count++;
            }
        }
        cout<<count+abs(n-m)<<endl;
    }
    return;
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
