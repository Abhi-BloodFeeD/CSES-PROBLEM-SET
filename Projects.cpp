#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll> arr[n];
    for(int i=0;i<n;i++){
        ll a,b,p;
        cin>>a>>b>>p;
        arr[i] = {b,a,p};
    }
    sort(arr,arr+n);
    ll score=arr[0][2];
    ll end_last   = arr[0][0];
    ll start_last = arr[0][1];
    for(int i=1;i<n;i++){
        ll start_this = arr[i][1];
        ll end_this   = arr[i][0];
        if(start_this>=end_last){
            end_last = end_this;
            score+=arr[i][2];
        }
    }
    cout<<score<<endl;
    return 0;
}
