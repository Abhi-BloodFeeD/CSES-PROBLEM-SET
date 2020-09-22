#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array<int>

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;
ll dp[mxN+1];
int n,x;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  cin>>n>>x;
  int c[n];
  for(int i=0;i<n;++i)
    cin>>c[i];
  dp[0]=1;
  for(int i=1;i<=x;i++)
    for(int j=0;j<n;j++)
      if(c[j]<=i)  
        dp[i]=(dp[i]+dp[i-c[j]])%mod;
  cout<<dp[x];
return 0; 
} 
