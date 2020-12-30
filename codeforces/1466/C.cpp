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
   string s;
   cin>>s;
   if(s.size()<2){
    cout<<0<<endl;
    return;
   }
   if(s.size()==2){
    if(s[0]==s[1]){
      cout<<1<<endl;
      return;
    }
    else{
      cout<<0<<endl;
      return;
    }
   }
   ll cnt=0;
   ll n=s.size();
   rep(i,0,s.size()-1){
    if(s[i]==s[i+1]){
       rep(j,'a','z'+1){
             if(i+2<n){
             if(char(j)!=s[i] && char(j)!=s[i+2]){
             //  cout<<i<<endl;
                if(i+3<n){
                  if(char(j)!=s[i+3]){
                    s[i+1]=char(j);
                  // cout<<char(j)<<endl;
                    cnt++;
                    break;
                  }
             }     
             else{
                s[i+1]=char(j);
                cnt++;
                break;
             }
           }
       }
       else{
         s[i+1]=char(j);
                cnt++;
                break;
       }
     }
     }
     if(i+2<n && s[i]==s[i+2]){
        rep(j,'a','z'+1){
             if(char(j)!=s[i] && char(j)!=s[i+1]){
               if(i+3<n){
                  if(char(j)!=s[i+3]){
                    if(i+4<n){
                      if(char(j)!=s[i+4]){
                        s[i+2]=char(j);
                        cnt++;
                        break;
                      }
                    }
                    else{
                       s[i+2]=char(j);
                        cnt++;
                        break;
                    }
                  }
             }     
             else{
                s[i+2]=char(j);
                cnt++;
                break;
             }
             }     
       }
     }
         // cout<<s<<endl;
        }
        //cout<<s<<endl;
        cout<<cnt<<endl;
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