#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define nl cout<<endl;

void start() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
int fibo(int n,vector<int>&dp){
    if(n<=1)return dp[n]=n;
    if(dp[n]!=-1)return dp[n];
     return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
}
int32_t main(){
    start();

    int T;
    //cin>>T;
    while(T--){
        int n; cin>>n;
        vector<int> dp(n+1,-1);
        cout<<fibo(n,dp)<<endl;
        //full fibonacchi array
        for(auto i:dp)cout<<i<<" ";nl;
    }


    return 0;
}
