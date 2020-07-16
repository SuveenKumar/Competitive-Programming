#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,x,y,z;
    cin>>a>>b>>x>>y>>z;
    cout<<max(0LL,2*x+y-a)+max(0LL,y+3*z-b)<<endl;
}
