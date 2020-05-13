#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
ll bs(ll* a,ll start,ll end,ll key){
    //cout<<start<<" "<<end<<endl;
    if(start>=end){
        if(a[end]<=key){
            return end+1;
        }
        else{
            return 0;
        }
    }
    ll mid=(end+start)/2;
    if(a[mid]<=key && a[mid+1]>key){
        return mid+1;
    }
    else if(a[mid]<=key && a[mid+1]<=key){
        return bs(a,mid+1,end,key); 
    }
    else if(a[mid]>key){
        return bs(a,start,mid-1,key);
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
         ll n;
         cin>>n;
         ll a[n];
         for(ll i=0;i<n;i++){
             cin>>a[i];
         } 
         ll q;
         sort(a,a+n);
         cin>>q;
         while(q--){
             ll coins;
             cin>>coins;
             if(a[0]>coins){
                 cout<<0<<endl;
             }
             else{
             cout<<bs(a,0,n-1,coins)<<endl;
             }
         }
    return 0;
}
