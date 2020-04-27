#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007 
using namespace std;
bool possible(int digits, int sum){
    return sum >= 0 && sum <= 9 * digits;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll digits,sum;
    cin>>digits>>sum;
    ll sum1=sum;
    string minn;
    if((digits>1 && (sum>9*digits || sum<=0)) || (digits==1 && sum>9*digits)){
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    for(ll i=0;i<digits;i++){
        for(ll j=0;j<10;j++){
            if ((i > 0 || j > 0 || (digits == 1 && j == 0) ) && possible(digits - i - 1, sum - j)){
                minn += char('0' + j);
                sum -= j;
                break;
            }
        }
    }
    cout<<minn<<" ";
    string maxx;
    while(sum1>0){
        if(sum1>=9){
             maxx += char('9');
             digits--;
             sum1=sum1-9;
        }
        else{
             maxx += char('0'+sum1);
             digits--;
             sum1=0;
        }
    }
    while(digits--){
        maxx+='0';
    }
    cout<<maxx<<endl;
    return 0;
}
