#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
   ll n;
   cin>>n;
   string s;
   ll cnt=0;
   while(n--){
     cin>>s;
     if(s=="Tetrahedron")cnt+=4;
     if(s=="Cube")cnt+=6;
     if(s=="Octahedron")cnt+=8;
     if(s=="Dodecahedron")cnt+=12;
     if(s=="Icosahedron")cnt+=20;
   }
   cout<<cnt<<endl;
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
