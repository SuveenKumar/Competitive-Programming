#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin>>n;
    bool easy=true;
    while(n--){
        ll x;
        cin>>x;
       if(x==1){
           easy=false;
       }
    }
    if(easy){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
}
