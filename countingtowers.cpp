#include<bits/stdc++.h>
// #include "bitsStd.hpp"
using namespace std;

const int mod = 1e9+7;
const int N = 1e6+1, M = N;

long long dp[N+1][2]={0};

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    dp[1][0]=1,dp[1][1]=1;
    for(int i=2;i<N;i++){
        dp[i][0] = (2*dp[i-1][0]+dp[i-1][1])%mod;
        dp[i][1] = (4*dp[i-1][1]+dp[i-1][0])%mod;
    }
    while(t--){
        int n;cin>>n;
        cout<<(dp[n][0]+dp[n][1])%mod<<endl;
    }
    return 0;
}