#ifndef ONLINE_JUDGE
 #include "bitsStd.hpp"
#else
 #include <bits/stdc++.h>
#endif
using namespace std;
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    //dp[0][0]=1;
    //dp[i][x] = num of ways sum x, using 1...i
    //dp[i][x]=dp[i-1][x]+dp[i-1][x-i];
    int mod = 1e9+7;
    int n;
    cin >> n;
    int target = n*(n+1)/2;
    if (target%2) {
        cout << 0 << endl;
        return 0;
    }
    target /= 2;

    vector<vector<int>> dp(n,vector<int>(target+1,0));
    dp[0][0] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= target; j++) {
        dp[i][j] = dp[i-1][j];
        int left = j-i;
        if (left >= 0) 
            (dp[i][j] += dp[i-1][left]) %= mod;
        }
    }
    cout << dp[n-1][target] << endl;
    return 0;
}