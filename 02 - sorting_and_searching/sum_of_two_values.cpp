#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main() {
    ll n; cin >> n;
    ll x; cin >> x;
 
    vector<pair<ll, ll>> array;
    for (ll i = 0; i < n; i++) {
        ll value;
        cin >> value;
        array.push_back({value, i+1});
    }
 
    sort(array.begin(), array.end());
 
    for (ll i = 0; i < array.size() - 1; i++) {
        ll elem = array[i].first; 
        ll upper = array.size() - 1;
        ll lower = i + 1; 
        ll curr = (upper + lower) / 2; 
        ll target = x - elem;
        ll value = array[curr].first; 
        
        while (value != target && lower <= upper) {
            if (target < value) {
                upper = curr - 1;
            } else {
                lower = curr + 1; 
            }
            curr = (ll) ((upper + lower) / 2);
            value = array[curr].first;
        }
 
        if (upper < lower) {
            curr = -1;
        }
 
        if (curr == -1) {
            continue;
        } else {
            ll i1 = array[i].second; 
            ll i2 = array[curr].second; 
            cout << i1 << " " << i2;
            return 0;
        }
    }
 
    cout << "IMPOSSIBLE";
 
    return 0;
}
