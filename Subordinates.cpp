#include<bits/stdc++.h>
// #include "bitsStd.hpp"
using namespace std;

const int N=200005;
vector<int>adj[N];
int dfs(int src, int par, vector<int> &ans)
{
    for(auto dest:adj[src]){
        if(dest!=par){
            ans[src]+=1+dfs(dest,src,ans);
        }
    }
    return ans[src];
}
 
int main() {
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
   long long t,n,m,x,i,j,k,q;
   t = 1;
   while(t--)
   {
        cin >> n;
        vector<int> ans(n+1);
        for(int i=2;i<n+1;i++)
        {
            cin >> x;
            adj[x].push_back(i);
            adj[i].push_back(x);
        }
        dfs(1, 0, ans);
        for(int i=1;i<n+1;i++)
            cout << ans[i]<<' ';
   }
   return 0;
}



