#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7, mxN = 1e3;
const int N = 2e5;
int dp[mxN][mxN];
string s[mxN];

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  

  int n;cin>>n;
  for(int i=0;i<n;++i)
      cin>>s[i];
  dp[0][0]=1;
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      if(i)
        dp[i][j]+=dp[i-1][j];
      if(j)
        dp[i][j]+=dp[i][j-1];
      dp[i][j]%=mod;
      if(s[i][j]=='*')
        dp[i][j]=0; 
    }
  }
  cout<<dp[n-1][n-1];     
} 
