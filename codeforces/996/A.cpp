#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n;
    cin>>n;
    int deno[5]={1,5,10,20,100};
    ll count=0;
    while(n>0){
        if(n>=100){
            count++;
            n-=100;
        }
        else if(n>=20 && n<100){
            count++;
            n-=20;
        }
        else if(n>=10 && n<20){
            count++;
            n-=10;
        }
        else if(n>=5 && n<10){
            count++;
            n-=5;
        }
        else{
           count++;
           n--;
        }
    }
    cout<<count<<endl;
    return 0;
}