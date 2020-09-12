#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll sum=0;
    ll a[n];
    ll freq[101];
    memset(freq,0,sizeof(freq));
    for(ll i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    bool flag=true;
    for(ll i=0;i<=100;i++){
        if(flag==1){
            if(freq[i]==0){
            sum=i+i;
            break;
            }
            else if(freq[i]==1){
                sum+=i;
                flag=0;
            }
        }
        else{
            if(freq[i]==0){
                sum+=i;
                break;
            }
        }
    }
    cout<<sum<<endl;
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}