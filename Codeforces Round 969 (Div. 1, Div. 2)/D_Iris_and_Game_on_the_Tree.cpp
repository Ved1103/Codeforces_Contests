//author: VedBrahmbhatt
#include <bits/stdc++.h>
using namespace std;

// ------------------------------------------------------------------------<optimizations>---------------------------------------------------------------//

/*
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
*/

// -----------------------------------------------------------------------</optimizations>---------------------------------------------------------------//

// -----------------------------------------------------------------------<Defines and typedefs>---------------------------------------------------------//
#define arr array
#define pb push_back
#define mk make_pair
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define pii pair<int, int>
#define umap unordered_map
#define imax INT_MAX
#define imin INT_MIN
#define nL "\n"
#define vll vector<long long>
#define PI 3.1415926535897932384626433832795
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define runtime() ((double)clock() / CLOCKS_PER_SEC) 
#define inrange(i,a,b) ((i>=min(a,b)) && (i<=max(a,b))) 
#define PQ(type) priority_queue<type> 
#define pq(type) priority_queue<type,vector<type>,greater<type> > 
// ---------------------------------------------------------------------</Defines and typedefs>----------------------------------------------------------//

// ----------------------------------------------------------------------------<MATH>------------------------------------------------------------------- //
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
ll ceil(ll a,ll b) { return (a+b-1)/b; }
ll digits(ll a) { return (ll)log10(a)+1; }
ll digsum(ll a) { ll s=0; while (a) { s+=a%10; a/=10; } return s; }
ll digroot(ll a) { ll d=digsum(a); if (d<10) return d; return digroot(d); }
ll power(ll a,ll b) { ll res=1; while (b) { if (b&1) res*=a; a*=a; b>>=1; } return res; }
ll power(ll a,ll b,ll m) { ll res=1; a%=m; while (b) { if (b&1) res=res*a%m; a=a*a%m; b>>=1; } return res; }
// void dfs(ll src, vll & adj, vll & visited)
// {
//     visited[src] = 1;
//     cout<<src<<endl;
//     for(auto i : adj[src])
//     {
//         if (visited[i] == 0)
//         {
//             dfs(i,edge,visited);
//         }
//     }
// }
// void bfs(ll src,vll & adj,vll & visited)
// {
//     queue<ll> q;
//     q.push(src);
//     ll node = 0;
//     while (!q.empty())
//     {
//         node = q.front();
//         q.pop();
//         visited[node] = 1;
//         cout<<node<<endl;
//         for (auto i: adj[node])
//         {
//             if (visited[i] == 0)
//                 q.push(i);
//         }
//     }
// }
// -----------------------------------------------------------------------</MATH>----------------------------------------------------------------------- //

// -----------------------------------------------------------------------</BITWISE>----------------------------------------------------------------------//
/* a=target variable, b=bit number to act upon 0-n */
#define BIT_SET(a,b) ((a) |= (1ULL<<(b)))
#define BIT_CLEAR(a,b) ((a) &= ~(1ULL<<(b)))
#define BIT_FLIP(a,b) ((a) ^= (1ULL<<(b)))

// '!!' to make sure this returns 0 or 1
#define BIT_CHECK(a,b) (!!((a) & (1ULL<<(b))))

#define BITMASK_SET(x, mask) ((x) |= (mask))
#define BITMASK_CLEAR(x, mask) ((x) &= (~(mask)))
#define BITMASK_FLIP(x, mask) ((x) ^= (mask))
#define BITMASK_CHECK_ALL(x, mask) (!(~(x) & (mask)))
#define BITMASK_CHECK_ANY(x, mask) ((x) & (mask))
// --------------------------------------------------------------------</BITWISE END>--------------------------------------------------------------------//

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

typedef vector<int> v;
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

// ----------------------------------------------------------------------<Debugging stuff>--------------------------------------------------------------//
#define TRACE

#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cout << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif

// ------------------------------------------------------------------------</Debugging stuff>-------------------------------------------------------------//

// --------------------------------------------------------------------------<HERE WE GO!>-----------------------------------------------------------------//
void solve() {
    //write your code here

    ll n;
    cin>>n;
    vector<ll> adj[n];

    f(i,0,n){
        ll a,b;
        cin>>a>>b;
        adj[a].pb[b];
        adj[b].pb[a];
    }

    vector<ll> visited(n,0);

    string s;
    cin>>s;
    
    
}

int main() {
    //auto start_time = high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
     cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
//auto stop_time = high_resolution_clock::now();
//"auto duration = duration_cast<milliseconds>(stop_time - start_time);"
//"cout << \"\n\nTime taken by program is : \" << duration.count() << \" milliseconds\" << endl;",
}