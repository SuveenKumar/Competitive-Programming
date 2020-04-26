#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n,a[1000000];
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll max=0;
    ll maxim=0;
    for(ll i=0;i<n-1;i++){
        if(a[i+1]>=a[i]){
            maxim++;
            if(maxim>max){
                max=maxim;
            }
        }
        else{
            maxim=0;
        }
    }
    cout<<max+1;
    return 0;
}
