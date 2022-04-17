#ifndef ONLINE_JUDGE
 #include "bitsStd.hpp"
#else
 #include <bits/stdc++.h>
#endif
using namespace std;

int dp[100001]={0};
int main() {
    // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
  int n;
  cin >> n;
  int coins[n];
  for(int i=0;i<n;i++)cin>>coins[i];
  dp[0]=1;
  for(int coin_no=0;coin_no<n;coin_no++){
      for(int sum=100001;sum>=coins[coin_no];sum--)
        if(dp[sum-coins[coin_no]]==1){
            dp[sum]=1;
        }
  }
  long long score=0;
  vector<int>sol;
  for(int i=1;i<100001;i++){
      if(dp[i]==1)sol.push_back(i);
  }
  cout<<sol.size()<<endl;
  for(auto x:sol)cout<<x<<" ";
  cout<<endl;
  
}
