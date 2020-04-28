#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    cin.ignore();
    while(t--){
      string s;
      cin>>s;
      ll c1=0;
      ll c0=0;
      for(ll i=0;i<s.size();i++){
           if(s[i]=='1'){
               c1++;
           }
           else{
               c0++;
           }
      }
      if(c0==0 || c1==0){
           cout<<s<<endl;
      }
      else{
           if(c0>c1){
               ll start=0;
               for(ll i=0;i<2*s.length();i++){
                        if(start==0){
                            cout<<start;
                            start=1;
                        }
                        else{
                            cout<<start;
                            start=0;
                        }
               }
           }
           else{
                ll start=1;
               for(ll i=0;i<2*s.length();i++){
                        if(start==1){
                            cout<<start;
                            start=0;
                        }
                        else{
                            cout<<start;
                            start=1;
                        }
               }
               
           }
           cout<<endl;
      }
      
    }
    return 0;
}