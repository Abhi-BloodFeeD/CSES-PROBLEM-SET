#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e5;
const int N = 2e5;
int n,x,dp[mxN];

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  cin>>n>>x;
  int h[n],s[n];
  for(int i=0;i<n;++i)
    cin>>h[i];
  for(int i=0;i<n;++i)
    cin>>s[i];
  for(int i=0;i<n;++i)
    for(int j=x;j>=h[i];--j)
        dp[j]=max(dp[j],dp[j-h[i]]+s[i]);    
  cout<<dp[x];
return 0; 
} 
