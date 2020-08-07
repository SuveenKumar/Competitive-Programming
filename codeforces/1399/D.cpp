#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve(){
   ll n;
   cin>>n;
   string s;
   cin>>s;
   set<ll> one;
   set<ll> zero;
   set <ll> :: iterator itr; 
   for(ll i=0;i<n;i++){
      if(s[i]=='1'){
        one.insert(i+1);
      }
      else{
        zero.insert(i+1);
      }
   }
   ll a[n];
   bool flag;
   if(s[0]=='0'){
      flag=false;
   }
   else{
     flag=true;
   }
   ll sub=1;
 ll indx=0;
 ll cnt=0;
  while(true){
        //cout<<indx<<endl;
        
        if(!flag){
          if(zero.empty()){if(cnt!=0)sub++;break;}
          if(zero.lower_bound(indx) != zero.end()){
          //cout<<"zero "<<topzero<<endl;
          ll topzero=*zero.upper_bound(indx);
          zero.erase(topzero);
          cnt++;
          a[topzero-1]=sub;
          flag=true;
          indx=topzero;
          }
          else{
          indx=0;
          sub++;
          ll topzero=*zero.upper_bound(indx);
          ll topone=*one.upper_bound(indx);
          if(topone>topzero)flag=false;
          else flag=true;
        } 
        }
        else if(flag){
          if(one.empty()){if(cnt!=0)sub++;break;}
          if(one.lower_bound(indx) != one.end()){
        //  cout<<"one "<<topone<<endl;
        ll topone=*one.upper_bound(indx);
          one.erase(topone);
          cnt++;
          a[topone-1]=sub;
          flag=false;
          indx=topone;
          }
          else{
          indx=0;
          sub++;
          cnt=0;
          ll topzero=*zero.upper_bound(indx);
          ll topone=*one.upper_bound(indx);
          if(topone>topzero)flag=false;
          else flag=true;
        } 
        }
  }   
    while(!one.empty()){
        
      ll topone=*(one.begin());
      a[topone-1]=sub;
      one.erase(topone);
      sub++;
    }
    while(!zero.empty()){
       // sub++;
      ll topzero=*(zero.begin());
      a[topzero-1]=sub;
      zero.erase(topzero);
      sub++;
    }
    cout<<sub-1<<endl;
    for(ll i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    cout<<endl; 
    return;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}