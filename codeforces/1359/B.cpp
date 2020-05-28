#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
ll compute(char a[1000][1000],ll n,ll m,ll x,ll y){
    ll single=0;
    ll pairs=0;
    ll row,col;
    for(row=0;row<n;row++){
       // cout<<single<<pairs<<endl;
        for(col=0;col<m-1;col++){
            if(a[row][col]=='.' && a[row][col+1]=='.'){
                 pairs++;
                 a[row][col]='*';
                 a[row][col+1]='*';
                 col++;
            }
            else if(a[row][col]=='.' && a[row][col+1]=='*'){
                single++;
                a[row][col]='*';
            }
        }
        if(a[row][m-1]=='.'){
            single++;
            a[row][m-1]='*';
        }
    }
    //  for(ll i=0;i<n;i++){
    //     for(ll j=0;j<m;j++){
    //         cout<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    //cout<<single<<" "<<pairs<<endl;
    ll ans=10000000000000;
    ll mul=0;
    for(ll i=pairs;i>=0;i--){
        ll res=(pairs*y)+((single+mul)*x);
        if(res<ans){
            ans=res;
        }
        mul=mul+2;
        pairs--;
    }
    return ans;
}
void solve(){
    ll n,m,x,y;
    cin>>n>>m>>x>>y;
    char a[1000][1000];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<compute(a,n,m,x,y)<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
