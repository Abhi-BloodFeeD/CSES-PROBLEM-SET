#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll mod = 1e9+7;

int main(){
    int n;cin>>n;
    ll m = n * n;
    ll summ = n*(n+1)/2;
    if(summ&1){
        cout<<0<<endl;
        return 0;
    }
    
    ll dp[m];
    
    memset(dp,0,sizeof(dp));
    
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=m;j>=i;j--){
            if(dp[j-i])dp[j]+=dp[j-i];
            dp[j]%=mod;
        }
    }
    summ/=2;
    cout<<(dp[summ]/2)%mod<<endl;
    
    return 0;
}