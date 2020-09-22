#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int mod = 1000000007;
const int N = 2e5,mxN=1e6;
ll dp[mxN];
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  int n,x;
  cin>>n>>x;
  int c[n];
  for(int i=0;i<n;i++)
    cin>>c[i];
  for(int i=1;i<=x;i++){
    dp[i]=1e9;
    for(int j=0;j<n;++j){
      if(c[j]<=i)
        dp[i]=min(dp[i],dp[i-c[j]]+1);
    }  
  }
  if(dp[x]>=1e9)
    cout<<-1;
  else
    cout<<dp[x];
  return 0; 
} 
