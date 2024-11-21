
                                  // ASSALAMU_ALAIKOM  //
                  //The Author Of This Template is : A_R_Adnan (Abdur Rahman Adnan)  //

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define pbds tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>
// A.order_of_key(x)   *A.find_by_order(x)
// less->sorted in ascending order and unique, greater->sorted in descending order and unique
// less_equal-> it will work as multiset and in ascending order, greater_equal->same as multiset in descending order 
typedef unsigned long long ull;
#define ld long double
typedef long long ll;
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define F first
#define S second
#define CY  cout<<"YES\n";
#define CN  cout<<"NO\n";
#define forr(v,n)	vll v(n);for(int i=0;i<n;i++){cin>>v[i];}
#define rall(x) (x).rbegin(), (x).rend()
#define all(x) (x).begin(), (x).end()
#define sz(s) ((int)((s).size()))
#define torad(x) (x) * ((2*acos(0))/180.0)
#define ite vector<int>::iterator
#define print(a)  for(auto v:a)cout<<v<<" ";cout<<"\n";
#define ASSALAMU_ALAIKOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
const ll inf = 1e18;
const ll minf = -1e18;
const ll mod = 1e9+7;
#define eps 1e-12
const double PI = acos(-1);
#define fit for(auto u:(x))
#define Max(x)  *max_element (all(x))
#define Min(x) *min_element (all(x))
#define PI 2*acos(0)
#define pob pop_back
#define set_bits(n) __builtin_popcountll(n)
//set_intersection(all(v1), all(v2), back_inserter(v));
//set_union(all(v1), all(v2), back_inserter(v));
//set_difference(all(v1), all(v2), back_inserter(v));
#define endl '\n'
//a%m is equivalent to ((a%m)+m)%m -->(it will work for both negative and positive value)
bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
   if (a.first > b.first)
      return 1;
   else if (a.first == b.first)
      return (a.second > b.second);
   return 0;
}
// ll mod(ll a,ll b)
// {
//    return ((a%b)+b)%b;
// }
ll log_a_to_base_b(ll a, ll b)
{
   return log2(a) / log2(b);
}
void printBinary(ll num)
{
   for (ll i = 63; i >= 0; i--)
      cout << ((num >> i) & 1);
   cout << endl;
}
bool power_of_2(ll x)
{
   return x && !(x & (x - 1));
}
#define endl '\n'
ll GCD(ll x, ll y)
{
   if (y == 0)
      return x;
   else
      return GCD(y, x % y);
}
ll LCM(ll x, ll y)
{
   return (x * y / (GCD(x, y)));
}
ll modAdd(ll a, ll b, ll m)
{
   return (a % m + b % m) % m;
}
ll modSub(ll a, ll b, ll m)
{
   return (a % m - b % m + m) % m;
}
int modMul(int a, int b, int m)
{
   return (a % m * b % m) % m;
}
ll power(ll a, ll n)
{
   ll ans = 1;
   while (n)
   {
      if (n & 1)
      {
         ans = ans * a;
         n--;
      }
      a *= a;
      n /= 2;
   }
   return ans;
}
ll modPower(ll a, ll n, ll mod)
{
   ll ans = 1;
   while (n)
   {
      if (n & 1)
      {
         ans = ((ans % mod) * (a % mod)) % mod;
         n--;
      }
      a = ((a % mod) * (a % mod)) % mod;
      n /= 2;
   }
   return ans;
}
ll modInv(ll a, ll mod)
{
   return modPower(a, mod - 2, mod);
}
ll modDiv(ll a, ll b, ll m)
{
   return modMul(a, modInv(b, m), m);
}
const ll N = 1e6 + 5;
const ll base = 33; // this should be greater than total distinct characters
vll pw(N), inv(N), Hash(N);
void preCal()
{
   pw[0] = 1;
   for (ll i = 1; i < N; i++)
      pw[i] = modMul(pw[i - 1], base, mod);
   ll pw_inv = modInv(base, mod);
   for (ll i = 1; i < N; i++)
      inv[i] = modMul(inv[i - 1], pw_inv, mod);
}
void buildHash(string s)
{
   ll n = sz(s);
   for (ll i = 0; i < n; i++)
   {
      Hash[i] = modAdd((i == 0) ? 0 : Hash[i - 1], modMul(pw[i], s[i] - 'a' + 1, mod),mod);
   }
}
ll getHash(ll l, ll r)
{
   ll res = modSub(Hash[r], (l == 0) ? 0 : Hash[l - 1], mod);
   res = modMul(res, inv[l], mod);
   return res;
}
int double_cmp(double a, double b)
{
   if (fabs(a - b) <= eps)
      return 0;
   else
      return a < b ? -1 : 1;
}
vector<bool> Sieve(ll n)
{
   vector<bool> prime(n + 1, true);
   for (ll p = 2; p * p <= n; p++)
   {
      if (prime[p] == true)
      {
         for (ll i = p * p; i <= n; i += p)
            prime[i] = false;
      }
   }
   return prime;
}
vll p_list;
vector<ll> sieve(ll n)
{
   vector<bool> prime(n + 1, true);
   for (ll p = 2; p * p <= n; p++)
   {
      if (prime[p] == true)
      {
         for (ll i = p * p; i <= n; i += p)
            prime[i] = false;
      }
   }
   for (ll i = 2; i <= n; i++)
   {
      if (prime[i])
         p_list.pb(i);
   }
   return p_list;
}
vector<vll> adj;
vll vis, color;
void dfs(ll node)
{
   vis[node] = 1;
   cout << node << " ";
   for (auto child : adj[node])
   {
      if (!vis[child])
         dfs(child);
   }
}
bool Is_Bipartite(ll node, ll clr)
{
   vis[node] = 1;
   color[node] = clr;
   for (auto child : adj[node])
   {
      if (!vis[child] && Is_Bipartite(child, clr ^ 1) == false)
         return false;
      else if (color[node] == color[child])
         return false;
   }
   return true;
}
bool Cycle(ll node, ll par)
{
   vis[node] = 1;
   for (auto child : adj[node])
   {
      if (!vis[child] && Cycle(child, node))
         return true;
      else if (child != par)
         return true;
   }
   return false;
}
vll Sub_sz;
ll Sub_Tree_Sz(ll node)
{
   ll curr_sz = 1;
   vis[node] = 1;
   for (auto child : adj[node])
   {
      if (!vis[child])
         curr_sz += Sub_Tree_Sz(child);
   }
   Sub_sz[node] = curr_sz;
   return curr_sz;
}
void bfs(ll s)
{
   queue<ll> q;
   vis[s] = 1;
   q.push(s);
   while (!q.empty())
   {
      ll x = q.front();
      cout << x << " ";
      q.pop();
      for (auto child : adj[x])
      {
         if (!vis[child])
         {
            vis[child] = 1;
            q.push(child);
         }
      }
   }
}
//debugging code segment
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define dbg(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//input output and error file
void OJ()
{
#ifndef ONLINE_JUDGE
   freopen("E:\\VS_C++\\input.txt", "r", stdin);
   freopen("E:\\VS_C++\\output.txt", "w+", stdout);
   freopen("E:\\VS_C++\\Erron.txt", "w", stderr);
#endif
}
int main()
{
   OJ();
   ASSALAMU_ALAIKOM
   ll n;
   cin>>n;
   cout<<n<<endl;
   return 0;
}