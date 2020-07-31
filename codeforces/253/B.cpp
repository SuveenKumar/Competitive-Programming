#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void hehe()
{
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    int n=1;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        auto itr = lower_bound(arr.begin(), arr.end(), 2 * arr[i] + 1);
        ans = min(ans, arr.end() - itr + i);
    }
    cout << ans << endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        hehe();
    }
    return 0;
}