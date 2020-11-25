#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1000000007
#define INF 1000000009
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define so sizeof 
#define pii pair<ll,ll>
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define minheap priority_queue<int,vector<int>,greater<int>>
#define maxheap priority_queue<int>
#define repe(i,a) for(auto i:a)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=b-1;i>=a;i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); 
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a) cin >> it;
    vector<int> res(n + 1, 1);
    n = unique(a.begin(), a.end()) - a.begin();
    a.resize(n);
    for (int i = 0; i < n; ++i) {
      res[a[i]] ++;
    }
    res[a[0]] -= 1;
    res[a[n - 1]] -= 1;
    int ans = 1e9;
    for (int i = 0; i < n; ++i) {
      ans = min(ans, res[a[i]]);
    }
    cout << ans << endl;
}
int main() {
#ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
#endif
        fast
        ll t;
        cin>>t;
        while(t--)
          solve();
        return 0;
    }