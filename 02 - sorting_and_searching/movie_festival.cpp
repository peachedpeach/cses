#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n; cin >> n;
    
    vector<pair<ll, ll>> pairs;
    for (int i = 0; i < n; i++) {
        ll a, b; cin >> a; cin >> b;
        pairs.push_back({b, a});
    }

    sort(pairs.begin(), pairs.end());

    ll end = 1;
    ll counter = 0;
    for (int i = 0; i < n; i++) {
        pair<ll, ll> curr = pairs[i];
        ll b = curr.first; ll a = curr.second;
        if (a >= end) {
            end = b;
            counter++;
        }
    }

    cout << counter;

    return 0;
}