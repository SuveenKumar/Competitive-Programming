#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    char s[3][3];
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
            cin>>s[i][j];
        }
    }
    if((s[0][0]==s[2][2])&&(s[0][1]==s[2][1])&&(s[0][2]==s[2][0])&&(s[1][0]==s[1][2])){
        cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;  
    }
}
