#include<bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(i,n) for(ll i=0;i<n;i++)
#define Fo(i,k,n) for(ll i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
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
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================
void solve(ll n,vl &v1,vl &v2)
{
    ll j=0;
    if(n%4==3){
        n-=3;
        j=3;
        v1.pb(1);
        v1.pb(2);
        v2.pb(3);
    }
    Fo(i,1,n/4+1){
        v1.pb(j+i);
    }
    Fo(i,n/4+1,(3*n/4)+1){
        v2.pb(j+i);
    }
    Fo(i,(3*n/4)+1,n+1){
        v1.pb(j+i);
    }
    return;
}
void print(vl &v1,vl&v2){
    cout<<"YES\n";
    cout<<v1.size()<<"\n";
    for(auto x:v1)cout<<x<<" ";
    cout<<"\n";
    cout<<v2.size()<<"\n";
    for(auto y:v2)cout<<y<<" ";
    cout<<"\n";
    return;
}
int main() {
    //srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ////CODE HERE ----------/////
    ll n;sl(n);
    vl v1,v2;
    ll sum_n=n*(n+1)/2;
    if(sum_n%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        if(n%4==0 || n%4==3)solve(n,v1,v2); 
        print(v1,v2);        
    }

   return 0;
}
