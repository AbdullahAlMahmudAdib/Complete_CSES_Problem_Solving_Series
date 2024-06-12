/*        بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ        */
/*        Abdullah_Al_Mahmud_Adib        */
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define testcase //cin >> t
#define finish                   \
    for (int i = 1; i <= t; i++) \
    {                            \
        solve();                 \
    }                            \
    return 0;
#define ALHAMDULILLAH \
    int main()        \
    {                 \
        fastio;       \
        int t = 1;    \
        testcase;     \
        finish        \
    }
#define ll long long
#define sort(a) sort(begin(a), end(a))
#define rsort(a) reverse(begin(a), end(a))
#define MOD 1000000007
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define lcm(a, b) (a * b) / __gcd(a, b)
#define lb lower_bound
#define ub upper_bound
#define gcd(a, b) __gcd(a, b)
#define pb push_back
#define mp make_pair
#define ppb pop_back
#define ss second
#define ff first
#define sz(x) (int)(x).size()
#define rd ({ ll x; cin >> x; x; })
void solve(){
    ll n = rd;
    set<ll> a;
    for(ll i= 0; i < n; ++i){
        ll x = rd;
        a.insert(x);
    }
    cout << a.size() << '\n';
}
ALHAMDULILLAH