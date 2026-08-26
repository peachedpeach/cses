#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t; cin >> t;

    vector<ll> output;
    for (int i = 0; i < t; i++) {
        ll x, y; cin >> y; cin >> x;
        ll n = max(x,y);
        int index = y - x;
        if (n % 2 == 0) {
            output.push_back(n * n - n + 1 + index);
        } else {
            output.push_back(n * n - n + 1 - index);
        }
    }

    for (int i = 0; i < t; i++) {
        cout << output[i]; cout << "\n";
    }

    return 0;
}