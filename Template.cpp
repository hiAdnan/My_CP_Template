
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
   return ((a % m ) - (b % m) + m) % m;
}
ll modMul(ll a, ll b, ll m)
{
   return ((a % m) * (b % m)) % m;
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
const ll N = 1e5+5;
pll mod1={1e9+7,1e9+9},base={53,67}; // base should be greater than total distinct characters
vpll pw(N+5), inv(N+5), Hash(N+5);
vll pr = {1000000007, 1000000009, 1000000021, 1000000033, 1000000087, 1000000093, 1000000097, 1000000103, 1000000123, 1000000181, 1000000207, 1000000223, 1000000241, 1000000271, 1000000289};
vll bs = {31, 37, 53, 61, 67, 71};
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
long long get_random()
{
    return (long long)(rng());
}
 
long long get_random_in_range(long long L, long long R)
{
    long long rndm = get_random();
    return L + (rndm % (R - L + 1));
}
 
void randomMod()
{
    ll i = get_random_in_range(0, pr.size() - 1);
    mod1.F = pr[i];
    pr.erase(pr.begin() + i);
    i = get_random_in_range(0, pr.size() - 1);
    mod1.S = pr[i]; 
    i = get_random_in_range(0, bs.size() - 1);
    base.F = bs[i];
    bs.erase(bs.begin() + i);
    i = get_random_in_range(0, bs.size() - 1);
    base.S = bs[i];
}

void preCal()
{
   pw[0].F = pw[0].S= 1;
   for (ll i = 1; i < N; i++)
   {
      pw[i].F = modMul(pw[i - 1].F, base.F, mod1.F);
      pw[i].S = modMul(pw[i - 1].S, base.S, mod1.S);
   }
   ll pw_inv1 = modInv(base.F, mod1.F);
   ll pw_inv2 = modInv(base.S, mod1.S);
   inv[0].F = inv[0].S = 1;
   for (ll i = 1; i < N; i++)
   {
      inv[i].F = modMul(inv[i - 1].F, pw_inv1, mod1.F);
      inv[i].S = modMul(inv[i - 1].S, pw_inv2, mod1.S);
   }
}
void buildHash(const string& s)
{
   ll n = sz(s);
   for (ll i = 0; i < n; i++)
   {
      Hash[i].F = modAdd((i == 0) ? 0 : Hash[i - 1].F, modMul(pw[i].F, s[i] - 'a' + 1, mod1.F),mod1.F);
      Hash[i].S = modAdd((i == 0) ? 0 : Hash[i - 1].S, modMul(pw[i].S, s[i] - 'a' + 1, mod1.S),mod1.S);
   }
}
pll getHash(ll l, ll r)
{
   ll res1 = modSub(Hash[r].F, (l == 0) ? 0 : Hash[l - 1].F, mod1.F);
   ll res2 = modSub(Hash[r].S, (l == 0) ? 0 : Hash[l - 1].S, mod1.S);
   res1 = modMul(res1, inv[l].F, mod1.F);
   res2 = modMul(res2, inv[l].S, mod1.S);
   return {res1,res2};
}
ll double_cmp(double a, double b)
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
// Define a custom hash function for std::pair<any type> ste::vector<any type>
//now we can use pair<any tpe>,vector<any type> in unordered_set and unordered_map but we have to use a extra argument as CustomHash
//unordered_set<pll,CustomHash>st; st.insert(pair<long long, long long);
//unorderd_map<pll,ll,CustomHash>mp; mp[pll]++;
struct CustomHash {
    // Hash function for std::pair
    template <typename T1, typename T2>
    size_t operator()(const std::pair<T1, T2>& p) const {
        size_t hash1 = std::hash<T1>()(p.first);
        size_t hash2 = std::hash<T2>()(p.second);
        // Combine the hashes
        return hash1 ^ (hash2 << 1);
    }

    // Hash function for std::vector
    template <typename T>
    size_t operator()(const std::vector<T>& v) const {
        size_t hash = 0;
        for (const T& elem : v) {
            hash ^= std::hash<T>()(elem) + 0x9e3779b9 + (hash << 6) + (hash >> 2);
        }
        return hash;
    }
};
//input,output and error detection file
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
   
   return 0;
}