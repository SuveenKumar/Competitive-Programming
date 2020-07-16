#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin>>n;
    ll mw=0,cw=0;
    while(n--){
       ll m,c;
       cin>>m>>c;
       mw+=(m>c);
       cw+=(c>m);
    }
    if(mw>cw){
        cout<<"Mishka"<<endl;
    }
    else if(mw<cw){
        cout<<"Chris"<<endl;
    }
    else
    cout<<"Friendship is magic!^^"<<endl;
}
