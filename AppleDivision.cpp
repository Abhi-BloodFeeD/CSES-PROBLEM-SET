#include<bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
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
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}

const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================
int n,p[20];
int main() {
    //srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ////CODE HERE ----------/////
    cin>>n;
    ll s=0,ans=0;
    fo(i,n){cin>>p[i],s+=p[i];}
   
   for(int i=0;i<1<<n;i++){
       ll cs=0;
       fo(j,n)
            if(i>>j&1)
                cs+=p[j];
        if(cs<=s/2)
            ans=max(ans,cs);
   }
    cout<<s-2*ans;
    return 0;
}