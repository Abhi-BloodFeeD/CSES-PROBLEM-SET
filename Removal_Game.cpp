#ifndef ONLINE_JUDGE
 #include "bitsStd.hpp"
#else
 #include <bits/stdc++.h>
#endif
#define s 5005
#define ll long long
using namespace std;
ll dp[s][s],a[s];
ll fun(ll i,ll j){
    if(i > j)
    return 0;
    if(dp[i][j] != -1)
    return dp[i][j];
    ll op1 = a[i] + min(fun(i+2,j), fun(i+1,j-1) );
    ll op2 = a[j] + min(fun(i+1,j-1), fun(i,j-2) );
    return dp[i][j] = max(op1,op2);
}
int main(){
    ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)cin>>a[i];
    memset(dp,-1,sizeof(dp));
    cout<<fun(0,n-1)<<endl;
    return 0;
}
// using namespace std;
// long long dp[5001][5001];
// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//         #ifndef ONLINE_JUDGE
//          freopen("input.txt","r",stdin);
//          freopen("output.txt","w",stdout);
//         #endif
//         int n;cin>>n;
//         int x[n];
//         long long sum=0;.
//         for(int i=0;i<n;i++){
//             cin>>x[i];
//             sum+=x[i];
//         }
//         for(int l=n-1;l>=0;l--){
//             for(int r=l;r<n;r++){
//                 if(l==r){
//                     dp[l][r]=x[l];
//                 }
//                 else{
//                     dp[l][r] = max(x[l]-dp[l+1][r],x[r]-dp[l][r-1]);
//                 }
//             }
//         }
//         cout<<(sum+dp[0][n-1])/2<<endl;9
//     return 0;
// }