#ifndef ONLINE_JUDGE
 #include "bitsStd.hpp"
#else
 #include <bits/stdc++.h>
#endif
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
        #endif
    int a,b;cin>>a>>b;
    int dp[a+1][b+1];
    for(int i=0;i<=a;i++){
        
    }
    
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            if(i==j){
                dp[i][j]=0;
            }
            else
            {
                dp[i][j]=INT_MAX;

                for(int k=1;k<i;k++){
                    dp[i][j] = min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
                }

                for(int k=1;k<j;k++){
                    dp[i][j] = min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
                }
            }
        }
    }       
    cout<<dp[a][b]<<endl;             


    return 0;
}