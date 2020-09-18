#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ////CODE HERE ----------/////
    int n,x;cin>>n>>x;
    vector<vector<int>>a;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        vector<int>v;
        v.push_back(p);v.push_back(i);
        a.push_back(v);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int x2=x-a[i][0];
        //cout<<x2<<endl;;
        for(int j=i+1,k=n-1;j<k;j++){
            while(j<k && a[j][0]+a[k][0]>x2){
               --k;
            }
            if(j<k && a[j][0]+a[k][0]==x2){
                cout<<a[i][1]+1<<" "<<a[j][1]+1<<" "<<a[k][1]+1;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}