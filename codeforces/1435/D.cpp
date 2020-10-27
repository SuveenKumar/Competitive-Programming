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
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rrep(i,a,b) for(ll i=b;i>=a;i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); 
void solve(){
   int n;
  cin >> n;
  vector<int> op(2 * n);
  vector<int> st;
  for (int i = 0; i < 2 * n; i++) {
    string s;
    cin>>s;
    if (s == "+") {
      st.push_back(i);
    } else {
      if (st.empty()) {
        cout << "NO" << '\n';
        return;
      }
      cin >> op[i];
      op[st.back()] = -op[i];
      st.pop_back();
    }
  }
  set<int> s;
  for (int i = 0; i < 2 * n; i++) {
    if (op[i] < 0) {
      s.insert(-op[i]);
    } else {
      if (s.empty() || *s.begin() != op[i]) {
        cout << "NO" << '\n';
        return;
      }
      s.erase(s.begin());
    }
  }
  cout << "YES" << '\n';
  for (int i = 0; i < 2 * n; i++) {
    if (op[i] < 0) {
      cout << -op[i] << " ";
    }
  }
  cout << '\n';
}
int main() {
#ifndef ONLINE_JUDGE
      freopen("input.txt","r", stdin);
      freopen("output.txt","w", stdout);
  #endif
      fast
      // ll t;
      // cin>>t;
      // while(t--)
        solve();
      return 0;
  }
