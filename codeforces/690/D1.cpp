#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void dfs(string a[100],bool visited[100][100],ll r,ll c,ll i,ll j){
    if(i==r || i<0 || j<0 || j==c){
        return;
    }
    if(!visited[i][j] && a[i][j]=='B'){
        visited[i][j]=true;
        dfs(a,visited,r,c,i,j+1);
        dfs(a,visited,r,c,i+1,j);
        dfs(a,visited,r,c,i,j-1);
        dfs(a,visited,r,c,i-1,j);
    }
}
void solve(){
     ll r,c;
     cin>>r>>c;
     string a[100];
     bool visited[100][100];
     memset(visited, 0, sizeof(visited));
     for(ll i=0;i<r;i++){
         cin>>a[i];
     }
     ll count=0;
     for(ll i=0;i<r;i++){
         for(ll j=0;j<c;j++){
             if(!visited[i][j]&&a[i][j]=='B'){
                 dfs(a,visited,r,c,i,j);
                 count++;
             }
         }
     }
     cout<<count<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
