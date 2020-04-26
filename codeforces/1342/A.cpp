#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
      ll x,y;
      cin>>x>>y;
      ll a,b;
      cin>>a>>b;
      ll op1=(x+y)*a;
      ll op2=INT_MAX;
      if(x>y){
         op2=(x-y)*a+y*b;
      }
      else{
          op2=(y-x)*a+x*b;
      }
      cout<<min(op1,op2)<<endl;
    }
    return 0;
}
