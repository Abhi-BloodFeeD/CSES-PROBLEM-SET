#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e5;
const int mxM = 100;
const int N = 2e5;



int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,m;
  cin>>n>>m;
  int x[n+1],dp[n+2][m+2];
  memset(dp, 0 ,sizeof dp);
  for(int i=1;i<=n;++i)
    cin>>x[i]; 
  //finding array ending with i of variable sizes//
  for(int i=1;i<=n;++i){
    for(int j=1;j<=m;++j){
      if(i==1){
        if(x[i]==0 || x[i]==j)
          dp[i][j]=1;
        else
          dp[i][j]=0;
      }
      else
      {
        if(x[i]==0 || x[i]==j)
              dp[i][j]=((dp[i-1][j-1]+dp[i-1][j])%mod+dp[i-1][j+1])%mod;
        else
          dp[i][j]=0;
      }
    }
  }
  ll ans=0;
  for(int i=1;i<=m;i++)  
    ans=(ans+dp[n][i])%mod;
  cout<<ans;
return 0; 
} 
