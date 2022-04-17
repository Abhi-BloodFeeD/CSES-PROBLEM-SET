
#ifndef ONLINE_JUDGE
  #include "bitsStd.hpp"
#else 
  #include<bits/stdc++.h> 
#endif

using namespace std;
const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;
const int M = 1e4;


int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  string a,b;cin>>a>>b;
  int n = a.size(),m=b.size();
  int dp[n+1][m+1];
  for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
      if(i==0)
        dp[i][j] = j;
      else if(j==0)      
        dp[i][j] = i;
      else if(a[i-1]==b[j-1])
        dp[i][j] = dp[i-1][j-1];
      else{
        dp[i][j]=1+min({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]});
      }
    }
  }

cout<<dp[n][m]<<endl;
return 0; 
} 
