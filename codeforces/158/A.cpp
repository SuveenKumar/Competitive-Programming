#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
  ll n,k;
  cin>>n>>k;
  ll a[n];
  ll i;
  for(i=0;i<n;i++){
      cin>>a[i];
  }
  ll score=a[k-1];
  sort(a,a+n);
  for(i=0;i<n;i++){
      if(a[i]==score){
          break;
      }
  }
  ll count=0;
  while(i!=n){
      if(a[i]>0){
          count++;
      }
      i++;
  }
  cout<<count<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
     solve();
    return 0;
}
