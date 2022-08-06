/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int LOG;

int solve(int node,int k,vector<vector<int>>up,vector<int>depth){
    if(depth[node]<k)return -1;
    for(int j = 0; j < LOG; j++) {
            if(k & (1 << j)) {
                node = up[node][j];
            }
        }
    return node;
    
}
int main()
{
    
    //Inputs 
    
    int n;int q;cin>>n>>q;
    int parent[n];
    vector<int>depth(n);
    parent[0]=0;
    // depth[0]=0;
    for(int i=1;i<n;i++){
        cin>>parent[i];
        parent[i]--;
    }
    while(1<<LOG<=n)LOG++;
    ///  preprocessing____started
    vector<vector<int>>up(n,vector<int>(LOG));
    for(int v=0;v<n;v++){
        up[v][0] = parent[v];
        if(v!=0){
            depth[v]=depth[parent[v]]+1;
        }
        for(int j=1;j<LOG;j++){
            if(up[v][j]  == up[up[v][j-1]][j-1])break;
            up[v][j]  = up[up[v][j-1]][j-1];
        }
    }
    ///  preprocessing____done
    
    for(int i=0;i<q;i++){
        int x,k;
        cin>>x>>k;x--;
        int sol =  solve(x,k,up,depth);
        if(sol!=-1)sol++;
        cout<<sol<<endl;;
    }
    
    
    
    return 0;
}
