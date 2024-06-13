#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define sz(x) (int)(x).size()
#define rd ({ ll x; cin >> x; x; })
void solve(){
    ll n = rd; ll x= rd; ll count = 0;
    vector<ll> a(n);
    for(auto& it : a)cin >> it;
    sort(a.begin(), a.end());
    ll left = 0;
    ll right = sz(a) - 1;
    while(left <= right){
        if(a[left] + a[right] > x){
            count++;
            right--;
        }
        else if(a[left] + a[right] <= x){
            count++;
            left++;
            right--;
        }
        else if(left == right){
            count++;
            left++;
            right--;
        }
    }
    cout << count << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; i++)
        solve();
    return 0;
}