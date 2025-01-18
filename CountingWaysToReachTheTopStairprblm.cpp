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



int32_t main() {
    start();
     //calc(mp);
    int T =1; 
   // cin>>T;
    while(T--){ 
        int n; cin>>n;
        int nStairs = n;
   if (nStairs <= 1) {
            return 1;
        }

        int mod = 1000000007; 
        int prev = 1; 
        int prev2 = 1; 

        for (int i = 2; i <= nStairs; i++) {
            int curr = (prev % mod + prev2 % mod) % mod; 
            prev2 = prev;
            prev = curr;
        }

        return prev; 
    }
    
 return 0;  

} 
// You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.
// Each time, you can climb either one step or two steps.
// You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.
