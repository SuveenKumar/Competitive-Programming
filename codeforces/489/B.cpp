#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
bool possible(int digits, int sum){
    return sum >= 0 && sum <= 9 * digits;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll boys,girls,a[1000],b[1000];
    cin>>boys;
    for(ll i=0;i<boys;i++){
        cin>>a[i];
    }
    cin>>girls;
    for(ll i=0;i<girls;i++){
        cin>>b[i];
    }
    sort(a,a+boys);
    sort(b,b+girls);
    ll count=0;
    for(ll i=0;i<boys;i++){
        for(ll j=0;j<girls;j++){
              if(abs(a[i]-b[j])<=1){
                    // cout<<a[i]<<" "<<b[j]<<endl;
                     b[j]=INT_MAX;
                     count++;
                     break;
              }
        }
    }
    cout<<count<<endl;
    return 0;
}
