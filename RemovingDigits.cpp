#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  int n;cin>>n;
  int dp[mxN+1];
  for(int i=1;i<=n;++i){
    dp[i]=1e9;
    int i2=i;
    while(i2){
      dp[i]=min(dp[i],dp[i-i2%10]+1);
      i2/=10;
    }
  }
  cout<<dp[n];
  return 0; 
} 
