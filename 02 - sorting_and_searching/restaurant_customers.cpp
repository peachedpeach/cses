#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n; cin >> n;
    
    vector<pair<ll, ll>> times;
    for (int i = 0; i < n; i++) {
        ll a, b; cin >> a; cin >> b;
        times.push_back({a, 1});
        times.push_back({b, 2});
    }

    sort(times.begin(), times.end());

    ll m = 0;
    ll cum = 0;
    for (int i = 0; i < 2 * n; i++) {
        ll type =  times[i].second;
        if (type == 1) {
            cum++;
        } else {
            cum--;
        }
        m = max(m, cum);
    }

    cout << m;

    return 0;
}