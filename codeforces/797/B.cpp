#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define int long long
#define ld long double
#define fi first
#define se second
#define all(uiet) uiet.begin(),uiet.end()
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define vpp vector<pair< int, int > >
#define pll pair<int , int >
#define ppll pair < pll , pll >
#define mod 1000000007
const int INF=(1LL<<60)-1;

int32_t main(){
    SPEED;
    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    int oddmin = INF, oddmax = -INF;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        if(arr[i] & 1) {
            if(arr[i] > 0){
                oddmin = min(oddmin, arr[i]);
            }
            else{
                oddmax = max(oddmax, arr[i]);
            }
        }
        if(arr[i] > 0) ans += arr[i];
    }
    if(ans & 1) cout << ans ;
    else cout << ans - min(abs(oddmin), abs(oddmax));
}