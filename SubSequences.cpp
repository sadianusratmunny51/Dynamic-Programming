#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back
#define Block 1000
#define  nl cout<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vi  vector<int>
#define show cout<<ans<<endl

void start() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

void func(int ind, vi a,vi dp,int n,vector<vi>&v){
  if(ind==n){
    if(dp.size()==0) return;
    for(int i=0;i<dp.size();i++){
      cout<<dp[i]<<" ";
    }
    nl;
    v.pb(dp);
    return;
  }
  dp.pb(a[ind]);
  func(ind+1,a,dp,n,v);
  dp.pop_back();
  func(ind+1,a,dp,n,v);
}


int32_t main() {
    start();
     //calc(mp);
    int T =1; 
   // cin>>T;
    while(T--){ 
   int n; cin>>n;
   vi a(n);

   for(int i=0;i<n;i++){
     cin>>a[i];
   }
   vi dp;
   vector<vi>v;
   func(0LL,a,dp,n,v);

   cout<<v.size();

    }
 return 0;  

} 
