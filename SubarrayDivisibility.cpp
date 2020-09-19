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
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define w(t) int t;cin>>t;while(t--)
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

int mpow(int base, int exp); 

const int mod = 1000000007;
const int N = 2e5;
//=======================

//vi gv[N];
//int av[N];

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  //
  //---code from here---
  //for T test case uncoment this line
  //w(t){   }
  int n;cin>>n;
  ll a[n];
  ll s=0,ans=0;
  map<ll,int> mp;
  mp[0]++;
  fo(i,n){
    cin>>a[i];
    s=(s+a[i]%n+n)%n;
    ans+=mp[s];
    mp[s]++;
  }
  cout<<ans<<endl;


  return 0; 
} 
  
int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

