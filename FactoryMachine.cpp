#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(ll i=0;i<n;i++)
#define Fo(i,k,n) for(ll i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define itr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define w(t) ll t;cin>>t;while(t--)
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ////CODE HERE ----------/////
    
    int n,t;cin>>n>>t;
    itn k[n];ll prod=1;
    for(int i=0;i<n;i++){
        cin>>k[i]; 
        prod*=k[i];
    }
    for(int i=0;i<n;i++){
        ll time t*
    }
    //eg//------time/1+time/4+time/6+time/8+time/10 = 50
                //time = t/(1/k1 + 1/k2 + 1/k3);
    
    return 0;
}